## 0x13. C - More singly linked lists

> This repository contains the tasks for `C - More singly linked lists` project and a description of what each program or function does:

#### Task: 0-print_listint.c
Write a function that prints all the elements of a `listint_t` list.
* Prototype: `size_t print_listint(const listint_t *h);`

#### Task: 1-listint_len.c
Write a function that returns the number of elements in a linked `listint_t` list.
* Prototype: `size_t listint_len(const listint_t *h);`

#### Task: 2-add_nodeint.c
Write a function that adds a new node at the beginning of a `listint_t` list.
* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`

#### Task: 3-add_nodeint_end.c
Write a function that adds a new node at the end of a `listint_t` list.
* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`

#### Task: 4-free_list.c
Write a function that frees a `listint_t` list.
* Prototype: `void free_listint(listint_t *head);`

#### Task: 5-free_listint2.c
Write a function that frees a `listint_t` list.
* Prototype: `void free_listint2(listint_t **head);`

#### Task: 6-pop_listint.c
Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
* Prototype: `int pop_listint(listint_t **head);`

#### Task: 7-get_nodeint.c
Write a function that returns the nth node of a `listint_t` linked list.
* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`

#### Task: 8-sum_listint.c
Write a function that returns the sum of all the data (n) of a `listint_t` linked list.
* Prototype: `int sum_listint(listint_t *head);`

#### Task: 9-insert_nodeint.c
Write a function that inserts a new node at a given position.
* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`

#### Task: 10-delete_nodeint.c
Write a function that deletes the node at index index of a `listint_t` linked list.
* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`

___

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



