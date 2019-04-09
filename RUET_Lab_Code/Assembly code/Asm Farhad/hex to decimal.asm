.MODEL SMALL
.STACK 100H
.DATA      

CR EQU 0DH
LF EQU 0AH

MSG1 DB 10,13, 'ENTER A HEXADECIMAL NUMBER :$'
MSG2 DB 10,13, 'IN DECIMAL IT IS :- 1$'
HEX DB ?
 
 
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    
    ;Print first msg
    MOV AH,9
    LEA DX,MSG1
    INT 21H
    
    ;input take hexa
    MOV AH,1
    INT 21H
    
    ;CONVERT HEXA TO DECIMAL 
    MOV HEX,AL
    SUB HEX,11H
    
    ;Print SECOND msg
    MOV AH,9
    LEA DX,MSG2
    INT 21H
    
    ;Print DECIMAL NUMBER
    MOV AH,2
    MOV DL, HEX
    INT 21H
    
    MOV AX,4CH
    INT 21H
    

MAIN ENDP
END MAIN