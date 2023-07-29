; 101-hello_holberton.asm    print a string using printf

				extern	printf		; the C function, to be called
				global _start		; the standard gcc entry point

_start:				; the program label for the entry point
				mov	edi,	fmt		; format for printf
				xor	eax,	eax
				call	printf		; Call C function
				mov	eax,	0		; normal, no error, return value
				ret			; return

fmt:	db `Hello, Holberton\n`, 0	; The printf format, "\n",'0'
