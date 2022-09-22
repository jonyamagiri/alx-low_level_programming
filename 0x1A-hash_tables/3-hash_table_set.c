#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table you want to add or update the key/value tois the key
* @key: is the key (can not be an empty string)
* @value: value associated with the key
* (must be duplicated, can be an empty string)
* Return: 1 (if successful), 0 (otherwise)
* Desc: In case of collision, new node added at the beginning of the list
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *dup_value;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL)
		return (0);
	if (*key == '\0' || value == NULL)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	i = idx;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_value;
			return (1);
		}
		i++;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = dup_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
