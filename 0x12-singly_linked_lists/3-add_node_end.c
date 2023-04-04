#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - new node at the end
 * @head: input
 * @str: input
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *node = NULL;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
	}
	return (node);
}
