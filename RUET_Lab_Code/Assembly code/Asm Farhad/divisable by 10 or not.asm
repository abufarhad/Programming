.MODEL SMALL
.STACK 100H
.DATA
     
     MSG1 db 10,13, "Divisable by 10 $"  
     MSG2 db 10,13, "NOT Divisable by 10  $" 
     DIGIT DB ?
     
.CODE  
    MAIN PROC
          MOV AX, @DATA
          MOV DS, AX
          

    INPUT: 
        MOV AH,1
        INT 21H 
        
        CMP AL,0DH
         
        JE NEWLINE
        MOV DIGIT ,AL
       
        JMP INPUT
  
     
     NEWLINE:
        CMP DIGIT,'0'
        JE ANS
        
     
      
    LEA dX, MSG2
    mov ah, 9
    int 21h 
    JE EXIT 
    
    
    EXIT:
    MOV AX, 4CH
    INT 21H  
        
    ANS:
    LEA dX, MSG1
    mov ah, 9
    int 21h 
      
   
      

MOV AX, 4CH
INT 21H
    
MAIN ENDP
END MAIN

    
    
    
  
  
