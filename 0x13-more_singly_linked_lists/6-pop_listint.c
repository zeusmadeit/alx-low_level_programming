#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: listint_t list
* Return: returns the head node’s data (n)
*/
int	pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!head || !*head)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
