global imprime_parametros
extern printf
section .text

imprime_parametros:
	
	;v1

	;push rbp
	;mov rax, 1	
	;call printf
	;add rsp, 8
	
	;v2

	;push rbp
	;mov rax, 1	
	;call printf
	;pop rbp
	
	;v3

	mov rax, 1
	sub rsp, 8
	call printf
	add rsp, 8
	

	ret