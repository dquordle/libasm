global	_ft_strlen

section	.text

_ft_strlen:
		push	rdi
		push	rsi
		xor rsi, rsi

.loop:
		cmp	byte[rdi], 0
		jz	.return
		inc rsi
		inc rdi
		jmp .loop

.return:
		mov	rax, rsi
		pop	rsi
		pop rdi
		ret
