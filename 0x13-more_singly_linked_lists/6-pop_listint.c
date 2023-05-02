#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: listint_t list
* Return: returns the head node’s data (n)
*/
int	pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	return (temp->n);
}
