global sumag
;extern suma
section .text
sumag:
   
	sub rdi, rsi; a0, a1
	add rdi, rdx; a2
	sub rdi, rcx; a3
	add rdi, r8; a4
	sub rdi, r9; a5

	;push 5

	pop rax

	add rdi, rax; a6

	;pop rax

	;sub rdi, rax; a7

	mov rax, rdi
	     
	ret