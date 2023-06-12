#include "hash_tables.h"

/**
 * hash_table_create - function
 * @size: argument
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table = malloc(sizeof(hash_node_t) * size);
if (!table)
return (NULL);
return (table);
}

