.MODEL SMALL
.STACK 100H  


.DATA
MSG1 DB 10,13,'TYPE A BINARY NUMBER, UP TO 16 DIGITS:$' 
MSG2 DB 10,13,'IN HEX IT IS:$' 
COUNT DB 4 


 
 .CODE
 MAIN PROC 
    MOV AX,@DATA
    MOV DS,AX
    
    
    
    MOV AH,9 
    LEA DX,MSG1
    INT 21H
    
    MOV CX,16 
    MOV AH,1
    XOR BX,BX
     
LOOP1:
    INT 21H 

    
    AND AL,01H 
    SHL BX,1
    OR BL,AL
     

    LOOP LOOP1  
    
    
    MOV AH,9 
    LEA DX,MSG2
    INT 21H  
    
    MOV CL,4  
    
    
LEVEL1: 
    CMP COUNT,0
    JE EXIT 
    
    MOV DH,BH 
    SHR DH,CL 
    
    CMP DH,9
    JG LETTER 
    
    ADD DH,48 ; or 30H
    MOV DL,DH
    JMP DISPLAY
    
LETTER:
     ADD DH,37H
     MOV DL,DH
     
DISPLAY:
    MOV AH,2
    INT 21H 
    
    ROL BX,CL 
    DEC COUNT 
    JMP LEVEL1
    
    
    
    EXIT:
    
   MOV AX,4CH
   INT 21H
   
   MAIN ENDP
     END MAIN