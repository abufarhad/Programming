.MODEL SMALL
.STACK 100H
.DATA      


   CR EQU 0DH
   LF EQU 0AH   
 
 
 MSG1 DB 10,13, 'Enter a hexadecimal number : $'
 MSG2 db 10,13, 'In decimal it is: 1$'
 HEX DB ? 
 
   
 
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    
    
    MOV AH,9
    LEA DX,MSG1
    INT 21H
    
    MOV AH,1
    INT 21H
    
    MOV HEX ,AL
    SUB HEX,11H
    
    MOV AH,9
    LEA DX,MSG2
    INT 21H
    
    MOV AH,2
    MOV DL,HEX
    INT 21H
    
    
       
    MOV AX, 4CH
    INT 21H
    
MAIN ENDP
END MAIN