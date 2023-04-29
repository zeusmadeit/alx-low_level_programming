#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: listint_t list
 * Return: size of listint_t list @h
 */

size_t	print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

