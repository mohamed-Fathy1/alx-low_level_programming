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
new_node = malloc(sizeof(hash_node_t));
new_node->key = malloc(sizeof(char) * strlen(key));
new_node->value = malloc(sizeof(char) * strlen(value));
strcpy(new_node->key, key);
strcpy(new_node->value, value);
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
strcpy(tmp->value, value);
return (1);
}
if (!tmp->next)
break;
tmp = tmp->next;
}
new_head = malloc(sizeof(hash_node_t));
new_head->key = malloc(sizeof(char) * strlen(key));
new_head->value = malloc(sizeof(char) * strlen(value));
strcpy(new_head->key, key);
strcpy(new_head->value, value);
new_head->next = new_node->next;
new_node = new_head;
return (1);
}
return (0);
}
