#include "lists.h"

/**
* sum_listint -  returns the sum of all the data (n) of a listint_t linked list
* @head: listint_t list
* Return: returns the sum of all the data (n) of listint_t list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
