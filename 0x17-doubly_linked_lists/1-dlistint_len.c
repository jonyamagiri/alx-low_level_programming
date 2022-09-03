#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked dlistint_t list
* @h: pointer to first element in list
* Return: the number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int num_nodes = 0;

	for (; h != NULL; num_nodes++)
	{
		h = h->next;
	}
	return (num_nodes);
}
