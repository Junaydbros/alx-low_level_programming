#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a
 * dlistint_t list
 * @head: the head node of the linked list
 * @n: the new node to be inserted in the list
 *
 * Return: the address of the newly added element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = *head;
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = 0;
	newNode->prev = 0;

	if (list == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (list->next != NULL)
		{
			list = list->next;
		}
		list->next = newNode;
		newNode->prev = list;
	}

	return (newNode);
}
