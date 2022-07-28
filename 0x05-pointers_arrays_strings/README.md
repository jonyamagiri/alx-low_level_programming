## 0x05-pointers_arrays_strings

This repository contains the tasks for `C - Pointers, arrays and strings` project and a description of what each program or function does:

#### Task: 0-reset_to_98.c
A function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
* Prototype: `void reset_to_98(int *n);`

#### Task: 1-swap.c
A function that swaps the values of two integers.
* Prototype: `void swap_int(int *a, int *b);`

#### Task: 2-strlen.c
A function that returns the length of a string. The standard library provides a similar function: `strlen`
* Prototype: `int _strlen(char *s);`

#### Task: 3-puts.c
A function that prints a string, followed by a new line, to stdout. The standard library provides a similar function: `puts`
* Prototype: `void _puts(char *str);`

#### Task: 4-print_rev.c
A function that prints a string, in reverse, followed by a new line.
* Prototype: `void print_rev(char *s);`

#### Task: 5-rev_string.c
A function that reverses a string.
* Prototype: `void rev_string(char *s);`

#### Task: 6-puts2.c
A function that prints every other character of a string, starting with the first character, followed by a new line.
* Prototype: void puts2(char *str);

#### Task: 7-puts_half.c
A function that prints half of a string, followed by a new line.
* Prototype: `void puts_half(char *str);`
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`

#### Task: 8-print_array.c
A function that prints n elements of an array of integers, followed by a new line.
* Prototype: `void print_array(int *a, int n);`
* where `n` is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use `printf`

#### Task: 9-strcpy.c
A function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`. The standard library provides a similar function: `strcpy`
* Prototype: `char *_strcpy(char *dest, char *src);`
* Return value: the pointer to `dest`

#### Task: 100-atoi.c
* Write a function that convert a string to an integer.

#### Task: 101-keygen.c
* Create a program that generates random valid passwords for the program 101-crackme.



