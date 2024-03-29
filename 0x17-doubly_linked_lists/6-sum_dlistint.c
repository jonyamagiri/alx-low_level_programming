#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data of a dlistint_t linked list
* @head: pointer to first element (head) of list
* Return: 0 (if list is empty), the sum of all the data (otherwise)
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
