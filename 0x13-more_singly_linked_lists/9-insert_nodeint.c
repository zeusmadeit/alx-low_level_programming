#include "lists.h"

/**
* insert_nodeint_at_index -  inserts a new node at a given position
* @head: listint_t list
* @idx: index
* @n: integer value
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = 1;
	listint_t *new_node, *temp;

	temp = *head;
	if (!head || !*head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temp;
		temp = new_node;
		return (temp);
	}
	while (temp)
	{
		if (i == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
