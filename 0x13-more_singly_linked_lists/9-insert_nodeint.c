#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function
 * @head: input
 * @idx: input
 * @n: n
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr = NULL;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	current = *head;
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

if (idx != 0)
{
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
		if (!current)
			return (NULL);
	}
	ptr->next = current->next;
	current->next = ptr;

}
else
{
	ptr->next = *head;
	*head = ptr;
}
	return (ptr);
}
