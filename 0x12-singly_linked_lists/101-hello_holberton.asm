section .data
    hello db "Hello, Holberton", 10

section .text
    global _start

_start:
    mov rdi, hello
    mov rax, 0
    
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall

section .text
    extern printf

