#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of dlistint_t
 * linked list
 * @head: the head node
 * @index: the current index while traversing a n node
 *
 * Return: the nth node of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list = head;
	unsigned int cnt = 0;

	if (list == NULL)
	{
		return (NULL);
	}
	while (list)
	{
		list = list->next;
		cnt++;
		if (cnt == index)
		{
			break;
		}
	}

	return (list);
}
