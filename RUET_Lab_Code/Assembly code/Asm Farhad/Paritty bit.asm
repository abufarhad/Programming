.MODEL SMALL
.STACK 100H
.DATA 

    MSG1 db 10,13, "NUMBER OF 1 : $"
    MSG2 DB 10,13,'NUMBER OF 0 : $'
	
     CNT_1 DB ?
     CNT_0 DB ?
     
     
.CODE

MAIN PROC
          
          MOV AX, @DATA
          MOV DS, AX
          
    MOV BX,0
    MOV CL,1 
    
    MOV CNT_0 ,0  
    MOV CNT_1 ,0
    
 
    TOP:
       MOV AH,1
       INT 21H 
       
       CMP AL,0DH
       JE END_
       CMP AL,'1' 
       JE COUNT_1 
       JNE COUNT_0
       
       
        COUNT_1:
        INC  CNT_1
        JMP IGNOR
         
        COUNT_0:
         INC  CNT_0
        IGNOR:
        

       JMP TOP  
       


    
     
    
    
    
    
           
    END_:
    ADD CNT_1,'0' 
    ADD CNT_0,'0'
    MOV AH, 9        
    LEA dx, MSG1
    INT 21h 
    
    MOV AH,2
    MOV DL,CNT_1
    INT 21H 
    
    
    TEST CNT_1, 1
    JZ EVEN
    JNZ ODD
    
    ODD:
    MOV DL, '5'
    INT 21H 
    JMP EXIT:
    
    EVEN:
    MOV DL, '6'
    INT 21H
    
    EXIT:
    
    MOV AH,4CH
    INT 21H
    
    
    MAIN ENDP
END MAIN

