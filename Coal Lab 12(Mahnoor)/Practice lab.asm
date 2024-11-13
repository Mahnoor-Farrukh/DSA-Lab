.model small
.stack 100h
.data  
msg DB 'Pakistan$'
msg1 DB 'Zindabad$'
.code
main Proc   
    
    mov ax,@data
    mov ds,ax
    mov dx,offset msg
    mov ah,9
    int 21h
    
    call SPACE
    
    mov dx,offset msg1
    mov ah,9
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
    
Space endp

end main