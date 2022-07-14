#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: the linked list
* @str: string to be added to list
* Return: NULL (if function failed),
* the address of the new element (otherwise)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dups;
	int i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dups = strdup(str);
	if (str == NULL)
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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
