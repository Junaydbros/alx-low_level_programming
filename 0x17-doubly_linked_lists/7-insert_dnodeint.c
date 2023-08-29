#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position
 * @h: the head node of a linked list
 * @idx: the index of the list where the new node is to be inserted
 * @n: the position to be traversed for insertion
 *
 * Return: the address of the new node, or otherwise the inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *list = *h;
	dlistint_t *newNode;
	unsigned int cnt = 0;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (list == NULL && idx > 0)
	{
		return (NULL);
	}
	while (list)
	{
		if (cnt == idx)
		{
			newNode->next = list;
			newNode->prev = list->prev;
			list->prev->next = newNode;
			list->prev = newNode;
			break;
		}
		cnt++;
		list = list->next;
	}
	if (list == NULL)
	{
		return (NULL);
	}

	return (newNode);
}
