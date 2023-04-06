#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function
 * @h: input
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	size_t lenght = 0;
	int i;

	if (!h || !*h)
		return (0);

	while (*h != NULL)
	{
		i = *h - (*h)->next;
		if (i <= 0)
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
		else
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			lenght++;
		}
	}
	*h = NULL;
	return (lenght);
}

