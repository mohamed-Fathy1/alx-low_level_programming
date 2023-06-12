#include "./hash_tables.h"

/**
 * key_index - function
 * @key: argument
 * @size: argument
 * Return: unsigned int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned int hash_number = hash_djb2(key);

return (hash_number % size);
}
