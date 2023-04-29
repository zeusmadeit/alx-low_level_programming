#include "lists.h"

/**
 * add_nodeint - adds a node to begining of listint_t @head
 * @head: listint_t list
 * @n: integer
 * Return: a new listint_t list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
