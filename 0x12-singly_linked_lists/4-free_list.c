#include "lists_h"

/**
 * free_list - a function that frees a linked list
 *
 * @head: a pointer to the first node of a linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *cNode;

	if (head == NULL)
		free(head);
	else
	{
		while (head)
		{
			cNode = head;
			head = head->next;
			free(cNode->str);
			free(cNode);
		}
	}
}
