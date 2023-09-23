section .data
    hello db 'Hello, Holberton', 0Ah ; Null-terminated string

section .text
    global _start

; ----------------------------------------
; Function: _start
; Entry point of the program.
; Prints "Hello, Holberton" followed by a new line.
; Exits the program.
; ----------------------------------------
_start:
    ; Write the string to stdout
    mov rax, 1                  ; System call number for write (1)
    mov rdi, 1                  ; File descriptor (1 = stdout)
    mov rsi, hello              ; Address of the string
    mov rdx, 16                 ; Length of the string
    syscall

    ; Exit the program
    mov eax, 60                 ; System call number for exit (60)
    xor edi, edi                ; Exit status (0)
    syscall
