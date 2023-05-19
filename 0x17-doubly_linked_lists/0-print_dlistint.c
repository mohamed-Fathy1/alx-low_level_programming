#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - function
 * @h: input
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
