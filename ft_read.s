global	_ft_read

section .text

extern ___error

_ft_read:
		mov rax, 0x2000003
		syscall
		jc .error
		ret

.error:
		push rdi
		mov rdi, rax
		call ___error
		mov [rax], rdi
		mov rax, -1
		pop rdi
		ret
