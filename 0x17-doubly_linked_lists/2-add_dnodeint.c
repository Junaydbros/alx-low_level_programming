#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a
 * dlistint_t linked list
 * @head: the head node of the doubly linked list
 * @n: an integer to be inserted into the list
 *
 * Return: the address of the new element added
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *list = *head;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (list == NULL)
	{
		*head = newNode;
	}
	else
	{
		while ((list)->prev != NULL)
		{
			list = list->prev;
		}
		newNode->next = list;
		list->prev = newNode;
		list = newNode;
	}
	*head = newNode;

	return (newNode);
}

