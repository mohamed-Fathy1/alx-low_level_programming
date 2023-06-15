#include "./hash_tables.h"

/**
 * hash_table_set - function
 * @ht: argument
 * @key: argument
 * @value: argument
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned int hash_index = key_index((const unsigned char *)key, ht->size);
hash_node_t *new_node = ht->array[hash_index];
char *value_copy = strdup(value);

if (value_copy == NULL)
return (0);

if (!new_node)
{
new_node = malloc(sizeof(hash_node_t));
new_node->key = strdup(key);
new_node->value = value_copy;
new_node->next = NULL;
return (1);
}
else
{
hash_node_t *new_head;
hash_node_t *tmp = new_node;
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = value_copy;
return (1);
}
if (!tmp->next)
break;
tmp = tmp->next;
}
new_head = malloc(sizeof(hash_node_t));
new_head->key = strdup(key);
new_head->value = value_copy;
new_head->next = new_node->next;
new_node = new_head;
return (1);
}
return (0);
}
