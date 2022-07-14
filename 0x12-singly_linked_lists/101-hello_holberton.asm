;Description: 64-bit program in assembly that prints
;	Hello, Holberton, followed by a new line


;Equivalent C code:
;// hello.c
;#include <stdio.h>
;int main(void)
;{
;char msg[] = "Hello, Holberton\n";
;printf("%s\n", msg);
;return (0);
;}


;Declare needed C functions
	extern printf			;the C function to be called

	section .data			;Data section, initialized variables
msg:	db "Hello, Holberton", 0	;C string needs 0
fmt:	db "%s", 10, 0			;the printf format, "\n", '0'

	section .text			;code section

	global main			;standard gcc entry point
main:
	push rbp

	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf			;call C function

	pop rbp
	mov rax,0
	ret
