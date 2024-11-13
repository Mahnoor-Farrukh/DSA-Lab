.model small
.stack 100h
.data 
msg db 'Enter 1st value:$' 
msg1 db 'Enter 2nd value:$' 
msg2 db 'Enter 3rd value:$'
msgresult db 'Result:$'   

.code
main proc
    mov ax ,@data
    mov ds,ax

    
    mov dl,msg
    mov dx,offset msg  ; displaying msg 
    mov ah,9
    int 21h  
    call GetInput        ; function to get input from user
    mov bl, al         

    call SPACE

    mov dl,msg1            ; displaying msg1
    mov dx,offset msg1
    mov ah,9
    int 21h    
    
    call GetInput        ; function to get input from user
    mov cl, al          ; Store the second input in cl

    call SPACE
     
    mov dl,msg2
    mov dx,offset msg2  ; displaying msg2 
    mov ah,9
    int 21h   
    call GetInput       ; function to get input from user
    mov dl, al          ; Store the third input in dl
    
    call SPACE
 
    call Multiply       ; Multiply bl*cl
    call MultiplyWithThird ; Multiply the result with dl

    mov dx, offset msgresult     ; Display result message
    mov ah, 9
    int 21h

   
    call DisplayResult

    
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

GetInput proc
    mov ah, 1
    int 21h             
    sub al, 48         
    ret
GetInput endp

Multiply proc        
    mov al, bl           
    mul cl             
    mov bl, al           
    ret
Multiply endp

MultiplyWithThird proc   
    mov al, bl          
    mul dl            
    mov bl, al           
    ret
MultiplyWithThird endp

; Subroutine to display result
DisplayResult proc
    add bl, 48           ; Convert result from integer to ASCII
    mov dl, bl           ; Load result into dl for display
    mov ah, 2            ; Display character in DL
    int 21h
    ret
DisplayResult endp

end main
