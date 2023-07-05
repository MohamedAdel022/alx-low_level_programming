section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 10, 0  ; Format string for printf, 10 represents newline

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, format   ; Format string
    mov rsi, hello_msg  ; Message to print

    ; Call printf
    xor eax, eax  ; Set eax to 0
    call printf

    ; Exit program
    xor eax, eax  ; Set eax to 0 (return value)
    ret
