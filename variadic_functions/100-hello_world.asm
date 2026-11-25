section .data
	msg db "Hello, World", 10
	len equ $ - msg

section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, len
	syscall

	mov rax, 0
	ret
