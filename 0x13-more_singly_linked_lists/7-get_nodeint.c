#include "lists.h"

/**
* get_nodeint_at_index -  returns the nth node of a listint_t linked list
* @head: listint_t list
* @index: index of list
* Return: returns the listint_t list at @index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (NULL);
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
