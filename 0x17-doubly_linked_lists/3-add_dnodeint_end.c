#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the beginning of a dlistint_t list
* @head: pointer to first element of list
* @n: data to be added to new node
* Return: NULL (if it fails), the address of the new element (otherwise)
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	for (end_node = *head; end_node->next != NULL;)
		end_node = end_node->next;
	end_node->next = new_node;
	new_node->prev = end_node;

	return (new_node);
}
