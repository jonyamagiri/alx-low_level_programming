## 0x1A. C - Hash tables

> This repository contains the tasks for `Hash tables` project and a description of what each program or function does:

### Tasks

#### Task: 0-hash_table_create.c
Write a function that creates a hash table.

#### Task: 1-djb2.c
Write a hash function implementing the [djb2](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8) algorithm.

#### Task: 2-key_index.c
Write a function that gives you the index of a key.

#### Task: 3-hash_table_set.c
Write a function that adds an element to the hash table.

#### Task: 4-hash_table_get.c
Write a function that retrieves a value associated with a key.

#### Task: 5-hash_table_print.c
Write a function that prints a hash table.

#### Task: 6-hash_table_delete.c
Write a function that deletes a hash table.

#### Data structure for this project:
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

#### Task: 100-sorted_hash_table.c
Rewrite the previous functions using these data structures:
```
/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
```

* Resource - [PHP Internals Book: HashTable](https://www.phpinternalsbook.com/php5/hashtables/basic_structure.html)
* Use the same hash function - [djb2](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8) algorithm and these prototypes:
* `shash_table_t *shash_table_create(unsigned long int size);`
* `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
* `char *shash_table_get(const shash_table_t *ht, const char *key);`
* `void shash_table_print(const shash_table_t *ht);`
* `void shash_table_print_rev(const shash_table_t *ht);`
* `void shash_table_delete(shash_table_t *ht);`


___

#### Files:

* [test_files](https://github.com/jonyamagiri/alx-low_level_programming/tree/master/0x1A-hash_tables/test_files)




