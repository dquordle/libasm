global	_ft_strcmp

section .text

_ft_strcmp:
		push rdi
		push rsi
		push rdx
		mov al, byte[rsi]	

.loop:
		cmp	byte[rdi], al
		jnz .return
		cmp byte[rdi], 0
		jz .return
		inc rdi
		inc rsi
		mov al, byte[rsi]
		jmp .loop

.return:
		xor rax, rax
		mov al, byte[rdi]
		xor rdx, rdx
		mov dl, byte[rsi]
		sub rax, rdx
		pop rdx
		pop rsi
		pop rdi
		ret
