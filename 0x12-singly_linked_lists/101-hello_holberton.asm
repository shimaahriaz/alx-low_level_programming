section .data
    hello db "Hello, Holberton", 10
    hello_len equ $ - hello

section .text
global _start
_start:
; Write the message to stdout (file descriptor 1)
mov eax, 4         ; sys_write
mov ebx, 1         ; file descriptor 1 (stdout)
mov ecx, hello     ; pointer to the message
mov edx, hello_len ; message length
int 0x80           ; interrupt to invoke sys_write
; Exit the program
mov eax, 1         ; sys_exit
mov ebx, 0         ; status: 0
int 0x80           ; interrupt to invoke sys_exit
