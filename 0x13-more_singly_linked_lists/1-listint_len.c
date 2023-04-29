#include "lists.h"

/**
 * listint_len - returns num of elements in a linked listint_t list
 * @h: list
 * Return: number of nudes in listint_t @h
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
