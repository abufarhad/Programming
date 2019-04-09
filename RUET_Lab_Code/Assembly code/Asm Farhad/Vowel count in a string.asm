.MODEL SMALL
.STACK 100H
 
.DATA
   

 
.CODE
    MAIN PROC     
    
 ;Data segment initialization  
 
    MOV AX,@DATA 
    MOV DS,AX     
    MOV AH,1 
    MOV BL ,0
    
 INPUT:
    INT 21H 
    CMP AL,0DH
    JE OUTPUT
    CMP AL,'A'
    JE VOWEL 
    
    CMP AL,'E'
    JE VOWEL
    CMP AL,'I'
    JE VOWEL
    CMP AL,'O'
    JE VOWEL
    CMP AL,'U'
    JE VOWEL
     
    JMP INPUT
    

 VOWEL:
    INC BL
    
    JMP INPUT
    
 OUTPUT:
    MOV AH,2
    MOV DL,0AH
    INT 21H
    MOV DL,0DH
    INT 21H
    
    ADD BL,48
    
    MOV DL,BL
    MOV AH,2
    INT 21H 
          
 
    
    MOV AH,4Ch
    INT 21h 
    
 main ENDP
 END main
  