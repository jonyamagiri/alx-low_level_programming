## 0x13. C - More singly linked lists

> This repository contains the tasks for `C - More singly linked lists` project and a description of what each program or function does:

#### Task: 0-print_listint.c
Write a function that prints all the elements of a `listint_t` list.

#### Task: 1-listint_len.c
Write a function that returns the number of elements in a linked `listint_t` list.

#### Task: 2-add_nodeint.c
Write a function that adds a new node at the beginning of a `listint_t` list.

#### Task: 3-add_nodeint_end.c
Write a function that adds a new node at the end of a `listint_t` list.

#### Task: 4-free_list.c
Write a function that frees a `listint_t` list.

#### Task: 5-free_listint2.c
Write a function that frees a `listint_t` list.

#### Task: 6-pop_listint.c
Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).

#### Task: 7-get_nodeint.c
Write a function that returns the nth node of a `listint_t` linked list.

#### Task: 8-sum_listint.c
Write a function that returns the sum of all the data (n) of a `listint_t` linked list.

#### Task: 9-insert_nodeint.c
Write a function that inserts a new node at a given position.

#### Task: 10-delete_nodeint.c
Write a function that deletes the node at index index of a `listint_t` linked list.

#### Task: 100-reverse_listint.c
Write a function that reverses a `listint_t` linked list.

#### Task: 101-print_listint_safe.c
Write a function that prints a `listint_t` linked list.

#### Task: 102-free_listint_safe.c
Write a function that frees a `listint_t` list.

#### Task: 103-find_loop.c
Write a function that finds the loop in a linked list.

___

#### Files:
* [test-files](https://github.com/jonyamagiri/alx-low_level_programming/tree/master/0x13-more_singly_linked_lists/test-files) - `main.c` files used to locally test the functions
* [lists.h](https://github.com/jonyamagiri/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/lists.h) - header file containing function prototypes and data structures

#### Data structure used for this project:

```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```


