#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory for an arra
 * @nmemb: number of elements in the arra
 * @size: size of each elemen
 * Return: pointer to allocated memo
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
