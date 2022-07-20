#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: NULL (If there is no loop)
 * the address of the node where the loop starts (otherwise)
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowptr, *fastptr;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slowptr = head;
	fastptr = head->next;

	while (slowptr != fastptr)
	{
		if (fastptr == NULL || fastptr->next == NULL)
		{
			return (NULL);
		}
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
	}
	return (slowptr);
}
