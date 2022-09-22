#include "hash_tables.h"

/**
* key_index - gives you the index of a key
* @key: is the key
* @size: is the size of the array of the hash table
* Return: index at which the key/value pair should be stored in the array
* of the hash table
* Desc: This function uses the hash_djb2 function (or algorithm)
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_idx;

	key_idx = hash_djb2(key) % size;
	return (key_idx);
}
