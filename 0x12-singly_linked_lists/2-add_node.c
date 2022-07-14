#include "lists.h"
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: the linked list
* @str: string to be added to list
* Return: NULL (if function failed),
* the address of the new element (otherwise)
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;
	char *dups;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dups = strdup(str);
	if (dups == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
	{
		;
		i++;
	}

	new_node->str = dups;
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
