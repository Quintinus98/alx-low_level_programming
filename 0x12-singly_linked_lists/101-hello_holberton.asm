; 101-hello_holberton.asm    print a string using printf
; Assemble:	  nasm -f elf64 101-hello_holberton.asm
; Link:		  gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
; Run:		  ./hello > hello.out
; Output:	  cat hello_64.out


; Equivalent C code
; // hello.c
; #include <stdio.h>
; int main()
; {
;   printf("Hello, Holberton\n");
;   return 0;
; }

;	Declare needed C  functions
extern	printf		; the C function, to be called
global main		; the standard gcc entry point

main:				; the program label for the entry point
	mov	edi,	fmt		; format for printf
	xor	eax,	eax
  call	printf		; Call C function
	mov	eax,	0		; normal, no error, return value
	ret			; return

fmt:	db "Hello, Holberton\n", 0	; The printf format, "\n",'0'