#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - function
 * @head: input
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (node)
	{
		sum  += node->n;
		node = node->next;
	}

	return (sum);
}
