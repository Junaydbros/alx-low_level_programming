#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: the head node of the doubly linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	dlistint_t *prev;

	while (list)
	{
		prev = list;
		list = list->next;
		free(prev);
	}
}
