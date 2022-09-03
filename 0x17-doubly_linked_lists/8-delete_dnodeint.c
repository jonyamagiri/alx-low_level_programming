#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
* @head: pointer to first element (head) of list
* @index: is the index of the node that should be deleted. Index starts at 0
* Return: -1 (if it fails), 1 (Success)
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (count < index)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (-1);
		count++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
