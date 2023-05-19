#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *insert_dnodeint_at_index - function
 * @h: input
 * @idx: input
 * @n: input
 * Return: size_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *ptr = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	ptr = *h;
	new_node->n = n;
	while (ptr->next != NULL)
	{
		if (i > idx)
			return (NULL);
		else if (i == idx)
		{
			new_node->prev = ptr->prev;
			ptr->prev->next = new_node;
			ptr->prev = new_node;
			new_node->next = ptr;
			return (new_node);
		}
		ptr = ptr->next;
		i++;
		if (ptr == NULL)
			return (NULL);
	}

	ptr->next = new_node;
	new_node->prev = NULL;
	return (new_node);
}
