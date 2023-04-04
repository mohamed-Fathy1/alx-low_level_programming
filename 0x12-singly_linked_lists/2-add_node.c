#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node
 * @head: input
 * @str: input
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
