global imprime_parametros
extern printf
section .text

imprime_parametros:
	;mov rdi, 5
	;mov xmm0, 3.0
	;mov rsi, &(c)
	
	mov rax, 1
	call printf
	

	ret