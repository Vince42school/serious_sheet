section .text
	    global		ft_strlen

ft_strlen:
	    enter		0, 0
	    mov			al, 0
	    mov			rcx, 0
	    test		rdi, rdi
	    jz			end
	    sub			rcx, 1
	    cld
	    repne		scasb
	    not			rcx
	    sub			rcx, 1

end:
	    mov			rax, rcx
	    leave
	    ret
