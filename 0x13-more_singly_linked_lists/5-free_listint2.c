#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function
 * @head: input
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		listint_t *tmp = *head;

		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
