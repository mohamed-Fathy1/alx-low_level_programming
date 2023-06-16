#include "hash_tables.h"

/**
 * create_node - creates a node item
 * @key: key associated with the value
 * @value: the value to be added
 *
 * Return: returns the new element created, NULL if failed
 */
hash_node_t *create_node(const char *key, const char *value)
{
 hash_node_t *new_node;

 new_node = malloc(sizeof(hash_node_t));
 if (!new_node)
  return (NULL);

 new_node->key = strdup(key);
 new_node->value = strdup(value);
 new_node->next = NULL;

 return (new_node);
}

/**
 * add_node - adds an element to the hash table
 * @table: the hash table
 * @key: key of the item
 * @value: the value to be added to the hash table
 *
 * Return: returns 1 on success, 0 if function failed
 */
int hash_table_set(hash_table_t *table, const char *key, const char *value)
{
 hash_node_t **array, *temp;
 unsigned long int index;
 hash_node_t *node;

 if (!table) /* if no table provided */
  return (0);
 if (!key || key[0] == '\0') /* no key value */
  return (0);
 if (!value) /* if no value to add */
  return (0);
 /* get the index of the key */
 index = key_index((const unsigned char *)key, table->size);
 array = table->array;
 /* check if key exists and update it */
 temp = array[index];
 while (temp != NULL)
 {
  if (strcmp(key, temp->key) == 0)
  {
   free(temp->value);
   temp->value = strdup(value);
   return (1);
  }
  temp = temp->next;
 }
 /* create a new node */
 node = create_node(key, value);
 if (!node)
  return (0);
 /* add new node to hash table */
 if (array[index]) /* if item already present at index */
 {
  node->next = array[index];
  array[index] = node;
 }
 else /* first item at the current index */
  array[index] = node;
 return (1);
}
