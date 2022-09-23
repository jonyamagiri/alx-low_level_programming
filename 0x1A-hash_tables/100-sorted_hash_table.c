#include "hash_tables.h"

/**
* shash_table_create - creates a sorted hash table
* @size: size of the array
* Return: NULL - (if it fails or error occurs),
*         pointer to the newly created hash table (otherwise)
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_htable;
	unsigned long int i = 0;

	new_htable = malloc(sizeof(shash_table_t));
	if (new_htable == NULL)
		return (NULL);

	new_htable->size = size;
	new_htable->array = malloc(size * sizeof(shash_node_t *));
	if (new_htable->array == NULL)
		return (NULL);

	while (i < size)
	{
		new_htable->array[i] = NULL;
		i++;
	}
	new_htable->shead = NULL;
	new_htable->stail = NULL;

	return (new_htable);
}


/**
* shash_table_set - adds an element to the sorted hash table
* @ht: hash table you want to add or update the key/value to
* @key: is the key to be added (can not be an empty string)
* @value: value associated with the key
*         (must be duplicated, can be an empty string)
* Return: 1 (if successful),
*         0 (otherwise)
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp_node;
	char *dup_value;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (0);
	if (*key == '\0' || value == NULL)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->shead;
	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = dup_value;
			return (1);
		}
		temp_node = temp_node->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(dup_value);
		free(new_node);
		return (0);
	}

	new_node->value = dup_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp_node = ht->shead;
		while (temp_node->snext != NULL && strcmp(temp_node->snext->key, key) < 0)
		temp_node = temp_node->snext;
		new_node->sprev = temp_node;
		new_node->snext = temp_node->snext;
		if (temp_node->snext == NULL)
			ht->stail = new_node;
		else
			temp_node->snext->sprev = new_node;
		temp_node->snext = new_node;
	}

	return (1);
}


/**
* shash_table_get - retrieves a value associated with a key
*                   in a sorted hash table
* @ht: hash table you want to look into
* @key: key whose value you are looking for
* Return: NULL (if key couldn’t be found)
*         value associated with the key (otherwise)
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (0);
	if (*key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	temp_node = ht->shead;
	while (temp_node != NULL && strcmp(temp_node->key, key) != 0)
		temp_node = temp_node->snext;
	if (!temp_node)
		return (NULL);
	else
		return (temp_node->value);
}


/**
* shash_table_print - prints a sorted hash table
* @ht: the hash table to be printed
* Return: Nothing (if ht is NULL)
*         print the key/value in the order that they appear in the array of
*         hash table that is (Order: array, list) (otherwise)
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char *str = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (node = ht->shead; node; node = node->snext)
	{
		printf("%s'%s': '%s'", str, node->key, node->value);
		str = ", ";
	}
	printf("}\n");
}


/**
* shash_table_print_rev - prints a sorted hash table in reverse order
* @ht: the hash table to be printed
* Return: Nothing (if ht is NULL)
*         print the key/value in the reverse-order that they appear
*         in the array of hash table (otherwise)
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char *str = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (node = ht->stail; node; node = node->sprev)
	{
		printf("%s'%s': '%s'", str, node->key, node->value);
		str = ", ";
	}
	printf("}\n");
}


/**
* shash_table_delete - deletes a sorted hash table
* @ht: the hash table to be deleted
* Return: Nothing
*/

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *htable = ht;
	shash_node_t *node, *temp_node;

	if (ht == NULL)
		return;

	for (node = ht->shead; node; node = temp_node)
	{
		temp_node = node->snext;
		free(node->key);
		free(node->value);
		free(node);
	}

	free(htable->array);
	free(htable);
}
