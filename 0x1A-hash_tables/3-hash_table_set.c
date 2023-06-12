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

if (!new_node)
{
hash_node_t *new_head = malloc(sizeof(hash_node_t));
new_head->key = strdup(key);
new_head->value = strdup(value);
new_head->next = NULL;
new_node = new_head;
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
tmp->value = strdup(value);
return (1);
}
if (!tmp->next)
break;
tmp = tmp->next;
}
new_head = malloc(sizeof(hash_node_t));
new_head->key = strdup(key);
new_head->value = strdup(value);
new_head->next = new_node->next;
new_node = new_head;
return (1);
}
return (0);
}
