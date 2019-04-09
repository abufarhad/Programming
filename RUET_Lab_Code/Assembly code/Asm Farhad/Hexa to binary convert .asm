.MODEL SMALL
.STACK 100H


      
DATA SEGMENT
        STR1 DB "BINARY NUMBER IS : $"
        STR2 DB "DECIMAL NUMBER IS : $"
        BSTR DB 20 DUP("$")
        RSTR DB 20 DUP("$")
        NEWLINE DB 13,10,"$"
        CNT DB 0
        N DB 2
        H DB 16
        D DB 10H
        NUM DB ?
        SNUM DB ?
        HNUM DB 19H
DATA ENDS
CODE SEGMENT
        ASSUME CS:CODE,DS:DATA 
START:
        MOV AX,DATA
        MOV DS,AX
;CONVERT HEXA TO DECIMAL

        MOV CX,00
        MOV DX,00

     L6:MOV AX,00
        MOV AL,HNUM
        DIV D
        MOV HNUM,AL
        
        MOV BX,AX
        MOV CL,CNT
        MOV AX,1
        L5: CMP CL,00
            JE L7
            MUL H
            SUB CL,1
            JMP L5    
       L7: MUL BH
        ADD DX,AX
        ADD CNT,1
        CMP HNUM,0
        JG L6
        MOV NUM,DL


;CONVERT DECIMAL TO BINARY
        LEA SI,BSTR
        LEA DI,RSTR
    L1: MOV AX,00
        MOV AL,NUM
        DIV N
        ADD AH,30H
        MOV BYTE PTR[SI],AH
        INC SI
        MOV NUM,AL
        CMP AL,0
        JG L1

        DEC SI

     L2:MOV BL,BYTE PTR[SI]
        MOV BYTE PTR[DI],BL
        DEC SI
        INC DI
        CMP SI,0
        JNE L2

        MOV AH,09H
        LEA DX,STR1
        INT 21H


        MOV AH,09H
        LEA DX,RSTR
        INT 21H


        MOV AH,4CH
        INT 21H

CODE ENDS
        END START

