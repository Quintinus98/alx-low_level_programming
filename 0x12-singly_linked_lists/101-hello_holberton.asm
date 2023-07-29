				global		_start
				extern		printf
_start:
		mov		edi, fmt
		xor		eax, eax
		call	printf
		mov		eax, 0
		ret
fmt: db `Hello, Holberton\n`,0
