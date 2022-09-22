#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of the array
* Return: NULL (if it fails or error occurs),
* pointer to the newly created hash table (otherwise)
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_htable;
	unsigned long int i = 0;

	new_htable = malloc(sizeof(hash_table_t));
	if (new_htable == NULL)
		return (NULL);

	new_htable->size = size;
	new_htable->array = malloc(size * sizeof(hash_node_t *));
	if (new_htable->array == NULL)
		return (NULL);

	while (i < size)
	{
		new_htable->array[i] = NULL;
		i++;
	}

	return (new_htable);
}
