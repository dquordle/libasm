global	_ft_strcpy

section .text

_ft_strcpy:
		push rsi
		push rdi
		push rdx
		push rcx
		mov rdx, rdi

.loop:
		cmp byte[rsi], 0
		jz	.return
		mov rcx, [rsi]
		mov [rdx], rcx
		inc rdx
		inc rsi
		jmp .loop

.return:
		mov byte[rdx], 0
		mov rax, rdi
		pop rcx
		pop rdx
		pop rdi
		pop rsi
		ret
