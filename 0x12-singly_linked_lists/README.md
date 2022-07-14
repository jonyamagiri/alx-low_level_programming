## 0x12. C - Singly linked lists

> This repository contains the tasks for `C - Singly linked lists` project and a description of what each program or function does:

#### Task: 0-print_list.c
Write a function that prints all the elements of a list_t list.
* Prototype: `size_t print_list(const list_t *h);`

#### Task: 1-list_len.c
Write a function that returns the number of elements in a linked list_t list.
* Prototype: `size_t list_len(const list_t *h);`



Data structure used for this project:

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



