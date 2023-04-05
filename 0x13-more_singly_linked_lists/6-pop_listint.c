#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function
 * @head: input
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
