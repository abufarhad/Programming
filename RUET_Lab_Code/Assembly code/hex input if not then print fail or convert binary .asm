.STACK 100h
.MODEL small  

.DATA
    prompt DB 0AH,0DH,'ENTER THE BINARY STRING $' 
    MSG DB 0AH,0DH," IN BINARY IT IS $" 
    MSG2 DB 0AH,0DH,'INVALID INPUT $' 
    
.CODE
MAIN PROC 

    ;data segment initialization
    
    MOV AX,@DATA 
    MOV DS,AX
    
input:
    MOV BX,0
              
    MOV CL,4
    MOV AH,1
    INT 21H   
    
    
WHILE_:          

    ;if carriage return go out of the loop 
    CMP AL,0DH 
    JE OUTPUT 
    ;else compare if it is a hex or not i.e from 0 to 9 and A to F  
    
    
    ;start of the loop 
    CMP AL,'0'
    JL ERROR 
    CMP AL,'9'
    JG LETTER 
    AND AL,0FH 
    JMP SHIFT   
    
LETTER: 
    CMP AL,'F' 
    JG ERROR
    CMP AL,'A'
    JL ERROR
    SUB AL,37H 
    SHIFT:
    SHL BX,CL
    OR BL,AL 
    INT 21H
    JMP WHILE_ ;end of the inputloop 
    
;OUTPUT 

;same trick used in question 8.shift the 16 bits and display the carry bit

output:
    MOV AH,9
    LEA DX,MSG
    INT 21H
    MOV AH,2
    MOV CX,16
TOP:
    SHL BX,1
    JC set 
    MOV DL,'0'
    INT 21H
    JMP LABEL 
SET:
    MOV AH,2
    MOV DL,'1'
    INT 21H
LABEL: 
    LOOP TOP
    JMP EXIT 
ERROR:
    MOV AH,9 
    LEA DX,MSG2
    INT 21H
    JMP INPUT  
    
;END
EXIT:
    MOV AH,4Ch
    INT 21H 
MAIN ENDP
END MAIN