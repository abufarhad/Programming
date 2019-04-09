        .MODEL SMALL
        .DATA

                MSG  DB  0DH,0AH, ' ENTER THE STRING :-----> :  $'
                MSG2 DB  0DH,0AH, ' YOUR STRING IS  :-----> :  $'
                STR1 DB  255 DUP(?)
                ONE  DB ?
                TWO  DB ?
          .CODE

BEGIN:
          MOV AX,@DATA
          MOV DS,AX

          LEA DX,MSG
          MOV AH,09H
          INT 21H

          LEA SI,STR1
          MOV AH,01H

READ:
          INT 21H
          MOV BL,AL

          CMP AL,0DH
          JE  DISPLAY

          XOR AL,20H
          MOV [SI],AL
          INC SI

          ;CMP BL,0DH
          JMP READ



DISPLAY:

          MOV AL,'$'
          MOV [SI],AL

          LEA DX,MSG2
          MOV AH,09H
          INT 21H


          LEA DX,STR1
          MOV AH,09H
          INT 21H



         ; MOV AH,4CH
         ; INT 21H
          .EXIT



END BEGIN