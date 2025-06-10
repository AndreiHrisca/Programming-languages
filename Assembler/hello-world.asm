section .data
    mensaje db "Hola mundo!", 10   ; 10 es el código ASCII para salto de línea (\n)
    len equ $ - mensaje            ; Calcula la longitud de la cadena

section .text
    global _start

_start:
    ; syscall write
    mov rax, 1          ; Carga el número de syscall para write (1) en rax
    mov rdi, 1          ; Descriptor de archivo para STDOUT (1)
    mov rsi, mensaje    ; Dirección de memoria del mensaje a imprimir
    mov rdx, len        ; Longitud del mensaje
    syscall             ; Llama a la syscall para imprimir el mensaje

    ; syscall exit
    mov rax, 60         ; Carga el número de syscall para exit (60) en rax
    xor rdi, rdi        ; Carga 0 en rdi (código de salida)
    syscall             ; Llama a la syscall para salir del programa