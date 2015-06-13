section .text
		global ft_isalpha

ft_isalpha :
		enter 	0, 0
		mov		rax, 0
		cmp		rdi, 65
		jl		second_check
		cmp		rdi, 90
		jg		second_check
		mov		rax, 1
		jmp		end
	second_check :
		cmp		rdi, 97
		jl		end
		cmp		rdi, 122
		jg		end
		mov		rax, 1
	end :
		leave
		ret
