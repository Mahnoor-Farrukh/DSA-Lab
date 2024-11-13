.model small
.stack 100h
.data 
    msg DB 'Assalam Alaikum$'  
    msg1 DB 'I知 Mahnoor Farrukh, 19 years old, and I知 studying Computer Science in my 3rd semester at Riphah University$'
    msg2 DB 'When I知 not studying, you値l catch me diving into books (new hobby alert!)or just watching youtube$'
    msg3 DB 'Oh My most Favourite thing to do is relaxing and lounging in bed$'
    msg4 DB 'Thats all about me.$'
    msg5 DB 'ThankYou.$'

.code
main proc
    mov ax, @data     
    mov ds, ax

   
    mov dx, offset msg
    call PrintString  
    
    call SPACE  

   
    mov dx, offset msg1
    call PrintString  

    call SPACE   
    
    mov dx, offset msg2
    call PrintString  

    call SPACE  

    mov dx, offset msg3
    call PrintString  

    call SPACE  

    mov dx, offset msg4
    call PrintString  

    call SPACE  

    mov dx, offset msg5
    call PrintString  

    mov ah, 4Ch
    int 21h
main endp


PrintString proc         ;Function to print string
    mov ah, 9          
    int 21h            
    ret
PrintString endp


SPACE Proc
    mov dx,13         
    mov ah,2
    int 21h
    mov dx,10        
    mov ah,2
    int 21h
    ret
SPACE endp

end main
