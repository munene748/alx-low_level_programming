global   main
extern   printf

section .data
format db `Hello, Holberton\n`, 0

section .text
main:
    mov   edi, format  ; Load the address of the format string into edi
    xor   eax, eax     ; Clear the eax register (return value of printf)
    call  printf       ; Call the printf function
    mov   eax, 0       ; Set the return value to 0
    ret                ; Return from the main function

