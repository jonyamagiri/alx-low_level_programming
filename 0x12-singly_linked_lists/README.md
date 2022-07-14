## 0x12. C - Singly linked lists

> This repository contains the tasks for `C - Singly linked lists` project and a description of what each program or function does:

#### Task: 0-print_list.c
Write a function that prints all the elements of a list_t list.
* Prototype: `size_t print_list(const list_t *h);`

#### Task: 1-list_len.c
Write a function that returns the number of elements in a linked list_t list.
* Prototype: `size_t list_len(const list_t *h);`

#### Task: 2-add_node.c
Write a function that adds a new node at the beginning of a list_t list.
* Prototype: `list_t *add_node(list_t **head, const char *str);`

#### Task: 3-add_node_end.c
Write a function that adds a new node at the end of a list_t list.
* Prototype: `list_t *add_node_end(list_t **head, const char *str);`

#### Task: 4-free_list.c
Write a function that frees a list_t list.
* Prototype: `void free_list(list_t *head);`

#### Task: 100-first.c
Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.

#### Task: 101-hello_holberton.asm
Write a 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line.
* Your program will be compiled using `nasm` and `gcc`:

___

#### Data structure used for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```



