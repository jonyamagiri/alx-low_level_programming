## 0x18. C - Dynamic libraries

> This repository contains the tasks for `C - Dynamic libraries` project and a description of what each program or function does:

### Tasks

#### Task: libdynamic.so, main.h
Create the dynamic library `libdynamic.so` containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
#### Task: 1-create_dynamic_lib.sh
Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

#### Task: 100-operations.so
Create a dynamic library that contains C functions that can be called from Python.

#### Task: 101-make_me_win.sh
* I bought a ticket for the Giga Millions and chose these numbers: `9, 8, 10, 24, 75 + 9`. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?
* Our mole got us a copy of the program, you can download it [here](https://github.com/holbertonschool/0x18.c). Our mole also gave us a piece of documentation:
```
/* Giga Millions program  
  * Players may pick six numbers from two separate pools of numbers: 
  * - five different numbers from 1 to 75 and    
  * - one number from 1 to 15   
  * You win the jackpot by matching all six winning numbers in a drawing.  
  * Your chances to win the jackpot is 1 in 258,890,850   
  *
  * usage: ./gm n1 n2 n3 n4 n5 bonus
```
___

#### Files:

* [test-files](https://github.com/jonyamagiri/alx-low_level_programming/tree/master/0x18-dynamic_libraries/test-files)


