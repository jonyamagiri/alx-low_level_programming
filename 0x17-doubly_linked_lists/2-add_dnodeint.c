#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: pointer to first element of list
* @n: data to be added to new node
* Return: NULL (if it fails), the address of the new element (otherwise)
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
