.MODEL SMALL
.STACK 100H
      
.DATA

	NUM1 db 10,13,"ENTER FIRST NUMBER $"
	NUM2 db 10,13,"ENTER SECOND NUMBER $"
	ANS db 10,13,"SUM OF TWO  NUMBER IS : $"
	
	A DB 0
	B DB 0
	SUM DB 0
	  
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    
    ;PRINT FIRST MSG
    
    mov ah, 9        
    LEA dx, NUM1
    int 21h 
    
    ;INPUT FIRST NUM
    mov ah, 1
    int 21h 
    
    SUB AL,48
    MOV A,AL 
    

    
    ;PRINT SECOND  MSG
    LEA dx, NUM2
    mov ah, 9
    int 21h 
    
    ;INPUT SECOND  NUM
    mov ah, 1
    int 21h 
    
    SUB AL,48 

    
    ;ADD TWO NUMBER 
    
    ADD AL,A 
    MOV AH,0
    AAA   ;ADJUST AFTER ADDITION  (ADJUST IN HIGH BIT AND LOW BIT AUTOMATICALLY)
    
    ADD AH,48
    ADD AL,48
    
    MOV BX,AX
    
    
    
    ;PRINT THIRD  MSG
    LEA dx, ANS
    mov ah, 9
    int 21h        
        
    MOV AH,2
    MOV DL,BH   ;PRINT HIGH BIT
    INT 21H
    
    MOV AH,2
    MOV DL,BL    ;PRINT LOW BIT
    INT 21H
    
    
    MOV AX, 4CH
    INT 21H
    
MAIN ENDP
END MAIN
