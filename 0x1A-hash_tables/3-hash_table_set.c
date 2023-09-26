#include "hash_tables.h"

/**
 * create_new_node - function
 * @key: argument
 * @value: argument
 * Return: hash_node_t
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - function
 * @ht: argument
 * @key: argument
 * @value: argument
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int hash_index;
	hash_node_t **array, *tmp, *new_head;

	if (!ht || !key || key[0] == '\0' || !value)
		return (0);

	hash_index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;

	if (array[hash_index] == NULL)
	{
		array[hash_index] = create_new_node(key, value);
		if (array[hash_index] == NULL)
			return (0);
		return (1);
	}

	tmp = array[hash_index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_head = create_new_node(key, value);
	if (new_head == NULL)
		return (0);
	new_head->next = array[hash_index];
	array[hash_index] = new_head;
	return (1);
}
