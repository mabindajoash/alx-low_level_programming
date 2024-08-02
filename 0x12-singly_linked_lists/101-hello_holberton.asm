section .data
	message db 'Hello, Holberton', 10, 0

section .text
	global main

	extern printf

main:
	; Call printf
	mov rdi, message
	xor rax, rax
	call printf

	; Exit program
	mov eax, 0
	ret

