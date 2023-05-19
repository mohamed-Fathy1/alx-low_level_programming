#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - function
 * @head: input
 * @n: input
 * Return: size_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *ptr = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);
}
