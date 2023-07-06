#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t
 *
 * @head: the head of the linked list node
 * @str: a string that is to be stored in the linked list
 *
 * Return: new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nNode, *cNode;
	size_t h;

	cNode = (*head);
	nNode = malloc(sizeof(list_t));

	if (nNode == NULL)
		return (NULL);
	nNode->str = strdup(str);

	for (h = 0; str[h]; h++)
		;
	nNode->len = h;
	nNode->next = NULL;

	if ((*head) == NULL)
		(*head) = nNode;
	else
	{
		while (cNode->next != NULL)
			cNode = cNode->next;
		cNode->next = nNode;
	}

	return (nNode);
}
