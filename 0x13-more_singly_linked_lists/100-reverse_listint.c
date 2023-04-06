#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function
 * @head: input
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
