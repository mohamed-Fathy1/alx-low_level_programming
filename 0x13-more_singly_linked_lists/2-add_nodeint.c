#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function
 * @head: input
 * @n: input
 * Return: int
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
