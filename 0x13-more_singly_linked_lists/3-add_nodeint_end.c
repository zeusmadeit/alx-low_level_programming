#include "lists.h"

/**
 * add_nodeint_end - adds a new node @ end of a list_t list
 * @head: head of list
 * @n: int
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t tempnode;
	listint_t *temp = *head;

	tempnode = malloc(sizeof(listint_t));
	if (tempnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = tempnode;
		return (tempnode);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = tempnode;
	return (tempnode);
}
