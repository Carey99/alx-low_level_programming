	extern	printf

	        section .data
msg:		db "Hello, Holberton", 0
fmt:	    	db "%s", 10, 0

	        section .text

	        global main		; gcc entry point
main
	        push    rbp

		mov	rdi,fmt
		mov	rsi,msg
		mov	rax,0		; can be xor
	        call    printf		; Calling C function

		pop	rbp		; restoring back stack

		mov	rax,0		; no error
		ret			; return value
