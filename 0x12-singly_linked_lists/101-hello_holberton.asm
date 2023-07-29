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
section .data
  message db "Hello, Holberton\n", 0

section .text
	global _start
_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 16
	syscall