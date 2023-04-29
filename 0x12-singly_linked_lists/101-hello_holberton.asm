section .data
	hello db "Hello, Holberton", 10 ;

section .text
	extern printf

	global main
	main:
		push rbp
		mov rbp, rsp

		lea rdi, [rel hello]
		xor eax, eax ;

		call printf

		mov eax, 0x60 ;
		xor edi, edi ;
		syscall

		mov rsp, rbp
		pop rbp
