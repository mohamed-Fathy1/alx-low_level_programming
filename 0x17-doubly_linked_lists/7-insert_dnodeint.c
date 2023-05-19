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
	dlistint_t *new_node = NULL, *ptr = NULL;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	ptr = *h;
	while (ptr && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}

	if (!ptr)
		return (NULL);


	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);


	new_node->n = n;
	new_node->next = ptr->next;
	new_node->prev = ptr;
	if (ptr->next)
		ptr->prev->next = new_node;
	ptr->next = new_node;
	return (new_node);
}
