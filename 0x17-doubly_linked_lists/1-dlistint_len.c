#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;
	dlistint_t *current = h;

	count = 0;
	while (current != NULL)
	{
		count += 1;
		current = current->next
	}
	return (count);
}
