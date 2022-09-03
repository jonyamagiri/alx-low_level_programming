#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: pointer to first element (head) of list
* @idx: is the index of the list where the new node should be added.
* Index starts at 0
* @n: data to be added to new node
* Return: NULL (if it fails), the address of the new node (otherwise)
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (count < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		count++;
	}
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
