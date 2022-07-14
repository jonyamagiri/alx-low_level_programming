#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: the linked list
* Return: number of elements in the list
*/

size_t list_len(const list_t *h)
{
	size_t elems = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		elems++;
		h = h->next;
	}

	return (elems);
}
