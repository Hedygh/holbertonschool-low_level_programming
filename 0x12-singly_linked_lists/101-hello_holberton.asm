section .rodata
	format: db 'Hello, %s', 10, 0
	name: db 'Holberton', 0

section .text
	global main
	extern printf
main:
mov rdi, format
mov rsi, message
mov rax, 0
call printf
mov rax, 0
ret
