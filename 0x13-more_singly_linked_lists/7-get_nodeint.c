#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: pointer to head of listint_t
* @index: is the index of the node, starting at 0
* Return: NULL (if the node does not exist)
* the nth node of the list (otherwise)
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
