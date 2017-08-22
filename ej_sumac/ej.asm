global suma
;extern suma
section .text
	
	suma:
   
	push rbp
	mov rbp, rsp
	sub rsp, 24
	push rbx
	push r12
	push r13
	push r14
	push r15

	add rdi, rsi
	mov rax, rdi

	pop r15
	pop r14
	pop r13
	pop r12
	pop rbx
	add rsp, 24
	pop rbp
		     
	ret