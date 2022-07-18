#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: pointer to head of listint_t
* Return: the number of elements in listint_t
*/

size_t listint_len(const listint_t *h)
{
	size_t elems;

	if (h == NULL)
		return (0);

	for (elems = 0; h != NULL; elems++)
	{
		h = h->next;
	}
	return (elems);
}













