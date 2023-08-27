#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a
 * dlistint_t linked list
 * @h: the head node of the doubly list
 *
 * Return: count of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *list = h;
	size_t cnt = 0;

	if (!list)
	{
		return (0);
	}
	while (list)
	{
		cnt++;
		list = list->next;
	}

	return (cnt);
}
