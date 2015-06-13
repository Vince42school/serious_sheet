section .text
		global ft_isalnum
		extern ft_isalpha
		extern ft_isdigit

ft_isalnum :
		enter 	0, 0
		call	ft_isalpha
		cmp		rax, 0
		je		check_digit
		mov		rax, 1
		jmp		end

	check_digit :
		call	ft_isdigit
		cmp		rax, 0
		je		end
		mov		rax, 1

	end :
		leave
		ret
