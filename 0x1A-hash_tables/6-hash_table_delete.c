#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: the hash table to be deleted
* Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *htable = ht;
	hash_node_t *node, *temp_node;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			for (; node != NULL; node = temp_node)
			{
				temp_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
			}
		}
		i++;
	}
	free(htable->array);
	free(htable);
}
