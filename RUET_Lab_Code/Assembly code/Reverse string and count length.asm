.MODEL SMALL 
.STACK 100H  
.DATA 
.CODE 


MSG1 DB 'ENTER STRING : $'
MSG2 DB 0DH,0AH, 'REVERSE STRING : $'  
MSG3 DB 0DH,0AH, 'LENGTH OF THE STRING : $'


MAIN PROC     
    
     MOV AX,@DATA 
     MOV DS,AX
    
    
	 MOV CH,0
	 MOV CL,0 
	 MOV BL,30H  
	 
	 
	 LEA DX,MSG1 
     MOV AH,9
     INT 21H
	 
	 INPUT: 
    	 MOV AH,1
    	 INT 21H 
    	 CMP AL,13D    
    	 JE LINE           ;IF PRESS ENTER THEN GO TO LINE STATEMENT
    	 
    	 AND DX,0          ;MENDATORY TO SAVE IN STACK .16 BIT REGISTER VALUE =0
    	 MOV DL,AL
    	 PUSH DX           ;SAVE THE CHARACTER IN STACK
    	 INC CL            ; INCRIMENT VALUE OF STACK 
    	 
	     
	     ADD BL,1D
	 JMP INPUT   
	 
	 LINE:
    	 MOV AH,2
    	 MOV DL,0AH
    	 INT 21H
    	 MOV DL,0DH
    	 INT 21H
	 
	 LEA DX,MSG2 
     MOV AH,9
     INT 21H
	 
	 PRINT:
    	 AND DX,0          ; NEED A 16 BIT REGISTER IF WE WANT TO PUSH OR POP ON A STACK
    	 POP DX
    	 MOV AH,2 
    	 INT 21H  
	 LOOP PRINT
	       
	         
         MOV AH,2
    	 MOV DL,0AH
    	 INT 21H
    	 MOV DL,0DH
    	 INT 21H  
    	 
    	 LEA DX,MSG3
         MOV AH,9
         INT 21H
	         
         MOV AH,2
         MOV DL,BL
         INT 21H 
         
    MOV AH,4CH
    INT 21H
	
		MAIN ENDP
END MAIN        
