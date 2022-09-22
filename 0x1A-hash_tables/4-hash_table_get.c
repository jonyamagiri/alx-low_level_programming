#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table you want to look into
* @key: key you are looking for
* Return: NULL (if key couldn’t be found)
* value associated with the element (otherwise)
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (0);
	if (*key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	temp_node = (ht->array)[idx];
	while (temp_node != NULL && strcmp(temp_node->key, key) != 0)
		temp_node = temp_node->next;
	if (!temp_node)
		return (NULL);
	else
		return (temp_node->value);
}
