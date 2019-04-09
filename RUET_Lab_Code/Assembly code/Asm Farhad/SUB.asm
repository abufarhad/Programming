.MODEL SMALL
.STACK 100H
.DATA
NUM1 DB ?
NUM2 DB ?
SUM DB ?
.CODE
MAIN PROC 
    MOV AX,@DATA
    MOV DS,AX
    
    
    MOV AH,1
    INT 21H
    MOV NUM1,AL 
    
    MOV AH,1
    INT 21H
    MOV NUM2,AL
    
    MOV BL,NUM1
    
    SUB BL,NUM2    ; two variable can not be add so firstly move it in a register 
    ADD BL,48      ; for conversion 
    MOV SUM,BL  
    
    ;MOV CL,SUM
    
    MOV AH,2
    MOV DL,SUM
    INT 21H
    
    MOV AX,4CH
    INT 21H
    
MAIN ENDP
END MAIN
    
    