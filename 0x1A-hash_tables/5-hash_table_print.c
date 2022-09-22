#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: the hash table to be printed
* Return: Nothing (if ht is NULL)
* print the key/value in the order that they appear in the array of hash table
* that is (Order: array, list) (otherwise)
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int idx;
	char *str = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			printf("%s'%s': '%s'", str, node->key, node->value);
			str = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
