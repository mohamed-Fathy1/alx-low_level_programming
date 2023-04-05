#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function
 * @head: input
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
