#include "lists.h"

/**
* insert_nodeint_at_index -  inserts a new node at a given position
* @head: pointer to head of listint_t
* @idx: index of the list where the new node should be added. Index starts at 0
* @n: integer for the new node
* Return: NULL (if the function fails)
* the address of the new node (otherwise)
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count = 0;
	
	temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	while (count < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		count++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
