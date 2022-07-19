#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to address of head of listint_t
* Return: 0 (if the linked list is empty)
* the head node’s data (n) (otherwise)
*/

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *new_node;

	if (*head == NULL)
		return (0);

	node_data = (*head)->n;
	new_node = *head;
	*head = (*head)->next;

	free(new_node);
	return (node_data);
}
