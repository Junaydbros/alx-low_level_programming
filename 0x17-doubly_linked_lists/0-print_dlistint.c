#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a
 * doubly linked list
 * @h: the list to be printed
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;
	const dlistint_t *new = h;

	if (h == NULL)
	{
		return (0);
	}

	while (new)
	{
		cnt++;
		printf("%d\n", new->n);
		new = new->next;
	}

	return (cnt);
}
