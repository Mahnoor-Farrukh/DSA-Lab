.model small
.stack 100h
.data
.code
main proc
    

    mov ah, 1         ;input for X      
    int 21h
    sub al, 48               
    mov bl, al               
    
     mov dx,43
   mov ah,2           ; + Sign
   int 21h
   

    mov ah, 1               
    int 21h
    sub al, 48      ;Input for Y         
    mov cl, al               
    
     mov dx,45      ; - Sign
   mov ah,2
   int 21h
   
    
  
   
    mov ah, 1         ;Input for Z   
    int 21h
    sub al, 48               
    mov dl, al              
    
    ; Calculate X + Y
    mov al, bl       ;load x into al        
    add al, cl        ;al=x+y
      
    mov dx,45
   mov ah,2
   int 21h         
    call SubtractZ     ;al=al-z        
    call SubtractOne    ;al=al-1     
                                 
     
    mov dx, 61          ;= Sign     
    mov ah, 2
    int 21h                             
                                 
                                 
    call Results

   
    
    mov ah, 4Ch
    int 21h
main endp

             
SubtractZ proc                ;  Subtract Z from AL
    sub al, dl
    add al,48                           ; al = al- Z
    ret
SubtractZ endp

                   
SubtractOne proc                ;  Subtract 1 from AL
   sub al, 1                    ; al = al - 1
   add al,48                         
    ret
SubtractOne endp 

Results proc
     mov dl,al                     
    add dl, 48               
    mov ah, 2
    int 21h
    ret
Results endp

end main
