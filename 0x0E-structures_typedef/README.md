## 0x0E. C - Structures, typedef

> This repository contains the tasks for `C - Structures, typedef` project and a description of what each program or function does:

#### Task: dog.h
Define a new type `struct dog` with the following elements:
* `name`, type = `char *`
* `age`, type = `float`
* `owner`, type = `char *`

#### Task: 1-init_dog.c
Write a function that initialize a variable of type struct dog
* Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

#### Task: 2-print_dog.c
Write a function that prints a `struct dog`
* Prototype: `void print_dog(struct dog *d);`

#### Task: dog.h
Define a new type `dog_t` as a new name for the type `struct dog`.

#### Task: 4-new_dog.c
Write a function that creates a new dog.
* Prototype: `dog_t *new_dog(char *name, float age, char *owner);`

#### Task: 5-free_dog.c
Write a function that frees dogs.
* Prototype: `void free_dog(dog_t *d);`


