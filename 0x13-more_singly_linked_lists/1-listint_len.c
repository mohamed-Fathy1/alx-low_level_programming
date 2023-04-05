#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function
 * @h: input
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
