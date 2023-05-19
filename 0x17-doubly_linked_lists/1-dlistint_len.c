#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - function
 * @h: input
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
