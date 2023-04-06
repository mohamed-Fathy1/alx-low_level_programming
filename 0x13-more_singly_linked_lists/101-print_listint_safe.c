#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);


/**
 * print_listint_safe - function
 * @head: input
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ptr;
	size_t idx = 0;

	ptr = looped_listint_len(head);

	if (ptr != 0)
	{
		for (idx = 0; idx < ptr; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	else
	{
		for (; head != NULL; ptr++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	return (ptr);
}


/**
 * looped_listint_len - function
 * @head: input
 * Return: size_t
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ptr, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ptr = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (ptr == hare)
		{
			ptr = head;
			while (ptr != hare)
			{
				nodes++;
				ptr = ptr->next;
				hare = hare->next;
			}
			ptr = ptr->next;
			while (ptr != hare)
			{
				nodes++;
				ptr = ptr->next;
			}

			return (nodes);
		}

		ptr = ptr->next;
		hare = (hare->next)->next;
	}
	return (0);
}

