#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: pointer to the first node
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	for (; h != NULL; node_count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
