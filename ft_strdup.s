global	_ft_strdup

section .text

extern _malloc
extern _ft_strlen
extern _ft_strcpy

_ft_strdup:
		push rdi
		call _ft_strlen
		inc rax
		mov rdi, rax
		call _malloc
		mov rdi, rax
		pop rsi
		call _ft_strcpy
		ret
