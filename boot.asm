; boot asm code
bits 32
section .text
    align 4
    dd 0x1BADB002
    dd 0x00
    dd - (0x1BADB002 + 0x00)
global start 
extern Osmain; entery point
start:
    cli
    mov esp, stack_space

    call Osmain

    hlt


stack space: ; buffer