#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function
 * @head: input
 * @index: input
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			node = node->next;
		}
	}
	return (node);
}
