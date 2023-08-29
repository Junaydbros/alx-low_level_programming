#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index of
 * a dlistint_t linked list
 * @head: the head node of the linked list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 for a successful operation, -1 for a failed operation
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *list = *head;
	unsigned int cnt = 0;

	if (*head == NULL)
	{
		return (0);
	}

	if (index == 0)
	{
		*head = list->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(list);
		return (1);
	}
	while (list)
	{
		if (cnt == index)
		{
			list->prev->next = list->next;
			list->next->prev = list->prev;
			free(list);
			return (1);
		}
		cnt++;
		list = list->next;
	}

	return (0);
}
