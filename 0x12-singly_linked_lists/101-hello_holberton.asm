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
msg:	db "Hello, Holberton\n", 0	; C string needs 0
fmt:	db "Hello, Holberton\n", 0	; The printf format, "\n",'0'
      global main		; the standard gcc entry point
main:				; the program label for the entry point
      push    rbp		; set up stack frame, must be aligned
			mov	rdi,fmt
			mov	rsi,msg
			mov	rax,0		; or can be  xor  rax,rax
			call	printf		; Call C function
			pop	rbp		; restore stack
			mov	rax,0		; normal, no error, return value
			ret			; return
