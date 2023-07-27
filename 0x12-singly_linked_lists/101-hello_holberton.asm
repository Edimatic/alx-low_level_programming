section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 10, 0    ; %s format for a null-terminated string followed by newline (10)

section .text
    global main

extern printf

main:
    mov rdi, format
    mov rsi, hello_msg
    xor rax, rax         ; RAX = 0, indicating that we will pass arguments to printf using the registers
    call printf

    ; Exit the program
    xor rdi, rdi
    call exit

section .bss
    ; Reserve some space for the exit function to work
    resb 8

