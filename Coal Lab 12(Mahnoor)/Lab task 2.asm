.model small
.stack 100h
.data  
msg DB 'Enter 1st Number: $'
msg1 DB 'Enter 2nd Number: $' 
msg2 DB 'Addition: $'    
msg3 DB 'Subtraction: $' 
msg4 DB 'Multiplication: $'
msg5 DB 'Division: $'  
.code
main Proc  
    mov ax,@data
    mov ds,ax
    mov dx,offset msg      ;Printing 1st msg
    mov ah,9
    int 21h 
    
    mov ah,1
    int 21h 
    sub al,48                  ;input 1st 
    mov bl,al
    
    call SPACE
    
    mov dx,offset msg1      ;printing 2nd msg
    mov ah,9
    int 21h  
    
     mov ah,1
    int 21h 
    sub al,48                     ;input 2nd
     mov cl,al
    
    call SPACE 
    
    mov dx,offset msg2           ;Addition Method
    mov ah,9
    int 21h 
    call Adding 
    
    call SPACE
    
    mov dx,offset msg3            ;Subtraction Method
    mov ah,9
    int 21h  
    call Subtracting    
    
    call SPACE
    
    mov dx,offset msg4             ;Multiplication Method
    mov ah,9
    int 21h  
    call Multi
    
    call SPACE
    
    mov dx,offset msg5           ;Division Method
    mov ah,9
    int 21h  
    call Division
    
    call SPACE
    
    mov ah, 4Ch
    int 21h  
    
    main endp

SPACE Proc
    mov dx,13
    mov ah,2
    int 21h
    mov dx,10
    mov ah,2
    int 21h
    ret
    SPACE endp
    
Adding Proc
    mov al,bl
    add al,cl
    add al,48
    mov dl,al
    mov ah,2
    int 21h
    ret
    Adding endp

Subtracting Proc
   mov al,bl
   sub al,cl
   add al,48
   mov dl,al
   mov ah,2
   int 21h
   
    ret
    Subtracting endp

Multi Proc
    mov al, bl
    mul cl                   ; Multiply bl by cl
                          
    
    
    
    add al, 48               ; Convert units digit to ASCII
    mov dl, al
    mov ah, 2
    int 21h
    ret
    Multi endp
    
Division Proc 
    mov ax, 0                ; Clear ax for the division
    mov al, bl               ; dividend in al
    mov ah, 0                ; Clear ah for division
    div cl                   ; Divide al by cl
    
    add al, 48               ; Convert quotient to ASCII
    mov dl, al
    mov ah, 2
    int 21h
   
     ret
     Division endp
     
end main
   
   
    
    
    
    