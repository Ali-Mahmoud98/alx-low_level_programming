section .data
    format db 'Hello, Holberton', 10, 0   ; Define the format string with newline and null terminator

section .text
    global main    ; Entry point of the program

extern printf

main:
    ; Prepare the arguments for the printf function
    mov  rdi, format   ; Set rdi with the memory address of the format string
    xor  eax, eax      ; Clear eax to indicate there are no floating-point arguments

    ; Call printf function
    call printf

    ; Exit the program with return code 0
    xor  eax, eax      ; Set eax to 0 (return value)
    ret
