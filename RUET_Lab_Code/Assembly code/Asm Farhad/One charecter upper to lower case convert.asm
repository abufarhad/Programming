.MODEL SMALL
.STACK 100H
.DATA
A DB ?
B DB ?
 
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX  
    
     ;input take
     MOV AH,1
     INT 21H  
     MOV BL,AL
     
     ;convert lowercase 
     ADD BL,32
     INT 21H
     
     ;NEW LINE 
     
     MOV AH,2
     MOV DL,0DH
     INT 21H
     MOV DL,0AH
     INT 21H
     
     ;display output
     MOV AH,2
     MOV DL, BL
     INT 21H
     
     MOV AX,4CH
     INT 21H
     
 MAIN ENDP
 END MAIN
     