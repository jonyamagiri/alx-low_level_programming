#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at index of a listint_t linked list
* @head: pointer to address to head of listint_t
* @index:  is the index of the node that should be deleted. Index starts at 0
* Return: 1 (if it succeeded), -1 (if it failed)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new_node;
	unsigned int count = 0;

	new_node = *head;
	if (new_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new_node);
		return (1);
	}

	while (count < (index - 1))
	{
		if (new_node->next == NULL)
			return (-1);
		new_node = new_node->next;
		count++;
	}

	temp = new_node->next;
	new_node->next = temp->next;
	free(temp);
	return (1);
}
