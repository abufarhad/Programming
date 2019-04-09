.MODEL SMALL

.DATA   
        MSG1 DB 'PLEASE ENTER THE RANGE  : $'    
        MSG2 DB 0DH,0AH,'Fibonacci series - : $'  
        MSG4 DB 0DH,0AH,'54 $'
         
        MSG5 DB 0DH,0AH,'SUM IS - $'
        MSG3 DB 0DH,0AH,'$'
         
        NUM_1  DB ?
        NUM_2  DB ?
        NUM_3  DB ?
        V1     DB ?
        V2     DB  ?
        NL     DB  '  ', 0DH,0AH,'$'
        

.CODE                   
       MAIN PROC
                MOV AX,@DATA
                MOV DS,AX
               ; MOV CX,8 
                
               
                  
                 LEA DX,MSG1 
                 MOV AH,9
                 INT 21H 
                 
                 MOV AH,1
                 INT 21H
                 MOV BX,AX
                 SUB BX,32H
                 
                 
                 MOV CX,BX  
                  
                 LEA DX,MSG2 
                 MOV AH,9
                 INT 21H 
                 
                  LEA DX,MSG3
                 MOV AH,9
                 INT 21H 
                 
                 
                
                    
               
                 
                 
                MOV CH,0 
                
                
            	 
                MOV NUM_1,0
                MOV NUM_2,1

                MOV DL,NUM_1
                
                OR  DL,30H
                MOV AH,02H
                INT  21H 
                
                 MOV DL,0AH
            	 INT 21H
            	 MOV DL,0DH
            	 INT 21H  

                MOV DL,NUM_2
                OR DL,30H 
                
                
                
                MOV AH,02H
                INT 21H 
                
                 MOV DL,0AH
            	 INT 21H
            	 MOV DL,0DH
            	 INT 21H  

                
               L1:
                        
                        MOV AL,NUM_1
                        ADD AL,NUM_2 
                        
                        
                        MOV AH,0
                        MOV BL,AL
                        MOV DL,10
                        DIV DL
                        ADD AX,3030H

                        MOV V1,AL
                        MOV V2,AH

                        MOV DL,V1
                        MOV AH,02H
                        INT 21H
                        
                        MOV DL,V2
                        MOV AH,02H
                        INT 21H



                SHIFT:   
                         MOV DL,0AH
                    	 INT 21H
                    	 MOV DL,0DH
                    	 INT 21H  
                        
                        
                        MOV AL,NUM_2
                        MOV NUM_1,AL
                        MOV NUM_2,BL 
                        
                        MOV BL,  NUM_1
                        ADD BL,NUM_2
                        
                        
                       
                        LOOP L1    
                        
                        
                        MOV AH,2 
                        ADD BL,34H
                        MOV DL,BL 
                        
                 LEA DX,MSG5
                 MOV AH,9
                 INT 21H      
                 
                 LEA DX,MSG4
                 MOV AH,9
                 INT 21H 
                        
                        
                        
                        
                        

                MOV AX,4C00H
                INT 21H

        MAIN ENDP
       END MAIN