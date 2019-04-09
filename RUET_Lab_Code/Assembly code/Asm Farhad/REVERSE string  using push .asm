.MODEL SMALL
.STACK 100H

.DATA
      
	
    MSG1 db 10,13, "ENTER THE STRING $"
    MSG2 DB 10,13,'REVERSE STRING IS : $'
	
	  
.CODE  
    MAIN PROC
          MOV AX, @DATA
          MOV DS, AX
    
    MOV CX,0
    
          
    LEA dX, MSG1
    mov ah, 9
    int 21h 
    
     INPUT: 
        MOV AH,1
        INT 21H 
        MOV BL,AL
        
        CMP BL,0DH
        JE NEWLINE
    
        PUSH BX
        
        INC CX 
        JMP INPUT
      
      
   NEWLINE:
    MOV AH,2
    MOV DL,0DH
    INT 21H
    MOV DL,0AH
    INT 21H  
    
    LEA dX, MSG2
    mov ah, 9
    int 21h 
     
    
      
  OUTPUT: 
       POP DX
       MOV AH,2
       INT 21H
       LOOP OUTPUT
          
    MOV AX, 4CH
    INT 21H

MAIN ENDP
 END MAIN