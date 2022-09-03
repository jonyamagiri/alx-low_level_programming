#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
* @head: pointer to first element (head) of list
* Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	for (; head != NULL; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
