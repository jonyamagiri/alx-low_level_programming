#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list
* @head: pointer to address of head of listint_t
*/

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}
	head = NULL;
}
