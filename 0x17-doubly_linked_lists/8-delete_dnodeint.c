#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *delete_dnodeint_at_index - function
 * @head: input
 * @index: input
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int i = 1;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	tmp = (*head)->next;
	while (tmp && index >= i)
	{
		if (i == index)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp), tmp = NULL;
			return (1);
		}
		if (tmp->next != NULL)
			tmp = tmp->next;
		else
		{
			i++;
			break;
		}
		i++;
		if (tmp == NULL)
			return (-1);
	}
	if (i != index)
		return (-1);
	tmp->prev->next = NULL;
	free(tmp);
	return (1);
}
