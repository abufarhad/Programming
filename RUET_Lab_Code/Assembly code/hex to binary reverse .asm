.MODEL SMALL
.STACK 100H
 
.DATA
m1 DB 'Type a character : ','$'
m2 DB 0ah,0dh,'The ASCII code of '
c1 DB ?,' in binary is:','$'       
PROMPT_2  DB  0DH,0AH,'The given binary number in reverse order is : $'

m3 DB 0ah,0dh,'The number of 1 bits is'
c2 DB ?,'$'
C3 DB ?     
 
 
.CODE
    MAIN PROC     
    
 ;Data segment initialization  
 
    MOV AX,@DATA 
    MOV DS,AX     ;displaying message M1
    

    MOV AH,9
    LEA DX,m1 
    INT 21h       ;Taking character input
    MOV AH,1
    INT 21h
    MOV C1,AL     ;For ASCII conversion     
        
    MOV C3,AL     ;For NO.OF 1 Bits    
    
    
  ;ASCII conversion
  
   MOV AH,9
   LEA DX,M2
   INT 21H 
   MOV AH,2
   MOV CX,8  
  
  
TOP: 
   SHL C1,1
   JC set
   MOV DL,'0'
   INT 21H
   JMP LABEL
SET:
   MOV AH,2
   MOV DL,'1'
   INT 21H
   JMP TOP  
 
  
LABEL:
   LOOP TOP   
             
  
    
    
    
    
;Number of 1 bits    

    MOV AH,9
    LEA DX,M3
    INT 21H   
   
    MOV AL,0
    MOV CX,8   
    
 TOP1:
    ROL C3,1
    JNC NEXT
    INC AL    
    
 NEXT:
    LOOP TOP1
    MOV AH,2
    MOV DL,AL
    ADD DL,30h
    INT 21H 
    
    ;dos exit  
    
    MOV AH,4Ch
    INT 21h 
    
 main ENDP
 END main
  