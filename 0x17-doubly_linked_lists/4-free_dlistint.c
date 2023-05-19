#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - function
 * @head: input
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node)
	{
		dlistint_t *tmp = node;

		node = node->next;
		free(tmp);
	}
}
