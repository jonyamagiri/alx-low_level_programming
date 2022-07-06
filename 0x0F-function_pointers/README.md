## 0x0F. C - Function pointers

> This repository contains the tasks for `C - Function pointers` project and a description of what each program or function does:

#### Task: 0-print_name.c
Write a function that prints a name.
* Prototype: `void print_name(char *name, void (*f)(char *));`

#### Task: 1-array_iterator.c
Write a function that executes a function given as a parameter on each element of an array.
* Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`

#### Task: 2-int_index.c
Write a function that searches for an integer.
* Prototype: `int int_index(int *array, int size, int (*cmp)(int));`

#### Task: 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
Write a program that performs simple operations.
1. `3-calc.h` - This file should contain all the function prototypes and data structures used by the program. You can use this structure:
2. `3-op_functions.c` - This file should contain the 5 following functions (not more):
* `op_add`: returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b);`
* `op_sub`: returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b);`
* `op_mul`: returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b);`
* `op_div`: returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b);`
* `op_mod`: returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b);`
3. `3-get_op_func.c` - This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.
* Prototype: `int (*get_op_func(char *s))(int, int);`
4. 3-main.c - This file should contain your `main` function only.


