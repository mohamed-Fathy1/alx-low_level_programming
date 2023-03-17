#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byt
 * @s: memory area to be fille
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memory for an arra
 * @nmemb: number of elements in the arra
 * @size: size of each elemen
 * Return: pointer to allocated memo
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
