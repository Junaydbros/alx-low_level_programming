#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 *
 * @head: a pointer to the pointer of list_t
 * @str: a string literal
 *
 * Return: the pointer to (head)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nNode;
	size_t a;

	nNode = malloc(sizeof(list_t));

	if (nNode == NULL)
		return (NULL);
	nNode->str = strdup(str);

	for (a = 0; str[a]; a++)
	{
		;
	}
	nNode->len = a;
	nNode->next = *head;
	*head = nNode;

	return (*head);
}
