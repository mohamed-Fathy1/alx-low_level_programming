#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * delete_first - function
 * @head: input
 */
void delete_first(listint_t ***head)
{
	listint_t *tmp;

	tmp = **head;
	**head = (**head)->next;
	free(tmp);
	tmp = NULL;
}

/**
 * delete_last - function
 * @head: input
 */
void delete_last(listint_t ***head)
{
	listint_t *tmp;
	listint_t *second_to_last = **head;

	tmp = **head;
	while (tmp->next)
	{
		second_to_last = tmp;
		tmp = tmp->next;
	}
	second_to_last->next = NULL;
	free(tmp);
	tmp = NULL;
}



/**
 * delete_index - function
 * @head: input
 * @index: input
 */
void delete_index(listint_t ***head, unsigned int index)
{
	unsigned int i;
	listint_t *current = **head;
	listint_t *previous = **head;

	for (i = 0; i < index; i++)
	{
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	free(current);
	current = NULL;
}

/**
 * delete_nodeint_at_index - function
 * @head: input
 * @index: input
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *tail = *head;

	if (*head == NULL)
		return (-1);

	while (tail)
	{
		tail = tail->next;
		len++;
	}

	if (len < index)
		return (-1);

	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	if (index == 0)
		delete_first(&head);
	else if (len == index)
		delete_last(&head);
	else
		delete_index(&head, index);

	return (1);
}
