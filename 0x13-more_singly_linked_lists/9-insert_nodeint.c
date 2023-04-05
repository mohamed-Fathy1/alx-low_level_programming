#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function
 * @head: input
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr = NULL;
	listint_t *current = *head;

	if (*head == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;


	for (i = 0; i < idx; i++)
	{
		current = current->next;
		if (!current)
			return (NULL);
	}
	ptr->next = current->next;
	current->next = ptr;
	return (ptr);
}
