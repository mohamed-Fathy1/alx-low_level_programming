#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *get_dnodeint_at_index - function
 * @head: input
 * @index: input
 * Return: int
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int idx = 0;

	while (idx != index)
	{
		node = node->next;
		idx++;
	}

	return (node);
}
