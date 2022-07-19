#include "lists.h"

/**
* reverse_listint - function that reverses a listint_t linked list
* @head: pointer to address to head of listint_t
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_node, *temp;

	if (*head == NULL)
		return (NULL);

	new_node = *head;
	temp = NULL;

	for (; *head != NULL; )
	{
		new_node = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = new_node;
	}
	*head = temp;
	return (*head);
}
