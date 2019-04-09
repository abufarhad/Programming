.MODEL SMALL
.STACK 100H
.DATA 
.CODE



MAIN PROC
    MOV AX,@DATA 
    MOV DS,AX
    
    MOV BX,30H         ; 30H == 0, INITIALIZATION
    
    LP:
    MOV AH,1
    INT 21H 
    
    INC BX             ; INCREMENT BL
    
    ;CMP AL,20H        ; IF GET SPACE THEN JUMP GO INSTRACTION 
    
    ;SUB BX,31H
    ;ADD BX,30H
    
        
    
    CMP AL,13D          ; If press Enter then exit . Value of enter key=13 in decimal.
    JE EXIT
    
    JMP LP              ; JMP AND TAKE INPUT
    
                        ; SPACE IS NOT A CHARECTER SO WE SUB 1 IN HEXA IT 31H
                        ; ADD BL,30H   
                        ; ADD 30H FOR GET A DECIMAL VALUE
   
    
    EXIT: 
        
        MOV AH,2
        MOV DL,0AH
        INT 21H
        MOV DL,0AH
        INT 21H  
        
        SUB BX,31H
        ADD BX,30H
        
        MOV AH,2
        MOV DX,BX        ;PRINT NUMBER OF CHARACTER== BL
        INT 21H
        
        MOV AH,4CH
        INT 21H

MAIN ENDP
    END MAIN
                       
     