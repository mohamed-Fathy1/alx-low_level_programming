#include "hash_tables.h"

/**
 * hash_table_create - function
 * @size: argument
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int i;

hash_table_t *table = malloc(sizeof(hash_table_t));
if (!table)
return (NULL);

table->size = size;
table->array = malloc(sizeof(hash_node_t **) * size);
if (!table->array)
{
free(table);
return (NULL);
}

for (i = 0; i < size; i++)
table->array[i] = NULL;

return (table);
}

