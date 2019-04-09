.MODEL SMALL
.STACK 100H
.DATA
A DW 2
B DW 5
SUM DW ?  
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    
    MOV AX, A
    MOV BX, B 
    ADD AX,BX 
    ADD AX,48
   ; MOV SUM ,AX  
    
    MOV AH,2
    MOV DX,AX
    INT 21H
    
    
    
    MOV AX, 4CH
    INT 21H
    
MAIN ENDP
END MAIN