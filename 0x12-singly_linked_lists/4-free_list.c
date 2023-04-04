#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *node = head;

	while (node)
	{
		list_t *tmp = node;

		node = node->next;
		free(tmp->str);
		free(tmp);
	}
}
