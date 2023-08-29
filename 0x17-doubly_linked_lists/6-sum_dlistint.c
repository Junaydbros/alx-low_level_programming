#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of
 * a dlistint_t linked list
 * @head: the head node of the linked list
 *
 * Return: 0 for an empty list, otherwise the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (list)
	{
		sum = sum + list->n;
		list = list->next;
	}

	return (sum);
}

