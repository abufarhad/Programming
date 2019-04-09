.MODEL SMALL
.STACK 100H
.DATA
A DB ?
B DB ?
 
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    
      
    MOV AH,1  
    INT 21H
    MOV A,AL
    INT 21H
    MOV B,AL
    
    
    MOV BL,A
    MOV CL,B
    ADD BL,CL 
    SUB BL,48
    
    MOV AH,2
    MOV DL,BL
    INT 21H
    
    
    
    
    
    MOV AX, 4CH
    INT 21H
    
MAIN ENDP
END MAIN




*************************
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
       
     
       SUB AL,30H
     
       SHL BX,CL
       OR BL,AL

       JMP TOP  
       
       
     
     
     

     
    END_:  
 
    MOV AH,2
    MOV DL,0AH
    INT 21H
    MOV DL,0DH
    INT 21H
 
    MOV CL,1
    MOV CH,0
    OUTPUT:
          CMP CH,8
          JE FINISH
          INC CH
          SHL BX,CL
          JC ONE
       
       
          MOV AH,2
          MOV DL,30H
          INT 21H
          JMP OUTPUT
       
    ONE:
        MOV AH,2
        MOV DL,31H
        INT 21H
        JMP OUTPUT

           
    
    FINISH:
    MOV AH,4CH
    INT 21H
    
    MAIN ENDP
END MAIN

****





    