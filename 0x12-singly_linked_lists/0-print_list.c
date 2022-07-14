#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - prints all the elements of a list_t list
* @h: the list_t list
* Return: the number of nodes in
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}

	return (count);
}
