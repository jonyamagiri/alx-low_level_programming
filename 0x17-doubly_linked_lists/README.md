## 0x17. C - Doubly linked lists

> This repository contains the tasks for `Doubly linked lists` project and a description of what each program or function does:

### Tasks

#### Task:  0-print_dlistint.c
Write a function that prints all the elements of a `dlistint_t` list.

#### Task: 1-dlistint_len.c
Write a function that returns the number of elements in a linked `dlistint_t` list.

#### Task: 2-add_dnodeint.c
Write a function that adds a new node at the beginning of a `dlistint_t` list.

#### Task: 3-add_dnodeint_end.c
Write a function that adds a new node at the end of a `dlistint_t` list.

#### Task: 4-free_dlistint.c
Write a function that frees a `dlistint_t` list.

#### Task: 5-get_dnodeint.c
Write a function that returns the nth node of a `dlistint_t` linked list.

#### Task: 6-sum_dlistint.c
Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

#### Task: 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c
Write a function that inserts a new node at a given position.

#### Task: 8-delete_dnodeint.c
Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

#### Task: 100-password
Find the password for [crackme4](https://github.com/holbertonschool/0x17.c).

#### Task: 102-result
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is `9009 = 91 × 99`.
* Find the largest palindrome made from the product of two 3-digit numbers.

#### Task: 103-keygen.c
Write a keygen for [crackme5](https://github.com/holbertonschool/0x17.c).
* Usage of the crackme: `./crackme5 username key`
* The crackme will segfault if you do not enter the correct key for the user
* Usage for your keygen: `./keygen5 username`
* Your keygen should print a valid key for the `username`

___

#### Files:

* [test-files](https://github.com/jonyamagiri/alx-low_level_programming/tree/master/0x17-doubly_linked_lists/test-files)


#### Data structure for this project:
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
```


