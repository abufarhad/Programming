.model small
.stack 100h
.data
no1 dw ?    
no2 dw ?
sum dw ?  
msg1 dw 10,13,'? $'
msg2 dw 10,13, 'THE SUM OF $'
msg3 dw ' AND $'
msg4 dw ' IS $'    
.code    
main proc
    mov ax,@data    
    mov ds,ax
                                                                             
    lea dx,msg1      
    mov ah,9    
    int 21h        
                                   
    mov ah,1        
    int 21h          
    sub ax,30h
    mov no1,ax  
   
    mov ah,1        
    int 21h
    sub ax,30h
    mov no2,ax      
               
    xchg no1,ax    
    xchg no2,ax
   
    mov ax,no1      
    add ax,no2
    mov sum,ax
    add sum,30h
   
    lea dx,msg2      
    mov ah,9
    int 21h  
   
    mov ax,no1      
    add ax,30h
    mov ah,2        
    mov dx,ax
    int 21h
     
    lea dx,msg3      
    mov ah,9    
    int 21h                                                                                
   
    mov ax,no2      
    add ax,30h
    mov ah,2        
    mov dx,ax
    int 21h
     
    lea dx,msg4      
    mov ah,9    
    int 21h
   
    mov ah,2        
    mov dx,sum
    int 21h  
           
    mov ah,4ch      
    int 21h  
     
main endp
    end main