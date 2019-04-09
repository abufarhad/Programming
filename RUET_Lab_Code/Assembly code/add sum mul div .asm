.MODEL SMALL
.STACK 100H
.DATA
A DB 2
B DB 5  
C DB 6
D DB 12

 
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX  
    
    ;Addition
    
    MOV AH,A 
    ADD AH,B   
    
    MOV BH,AH
    
   ; Subtraction
    
    MOV CH,B
    SUB CH,A   
    
    MOV DH,CH
    
    ;Multiplication
    
    
    MOV AL,D 
    MOV BL,C 
    MUL BL
    
    MOV CL,AL 
    
    
    ;DIVISION 
    
    MOV AL,D

    DIV BL  
    
    MOV DL,AL
     
       
    
    MOV AX, 4CH
    INT 21H
    
MAIN ENDP
END MAIN