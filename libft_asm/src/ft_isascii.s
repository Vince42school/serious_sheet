section .text
		global ft_isascii

ft_isascii :
		enter	0, 0
		mov		rax, 0
		cmp		rdi, 0
		jl		end
		cmp		rdi, 127
		jg		end
		mov		rax, 1

	end :
		leave
		ret
