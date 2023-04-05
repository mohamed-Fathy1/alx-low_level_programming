#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function
 * @head: input
 * @n: input
 * Return: int
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *current;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node;
	}
	return (node);
}
