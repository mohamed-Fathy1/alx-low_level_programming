#include <stdlib.h>
#include "main.h"
/**
 * *array_range - allocates memory for an arra
 * @min: number of elements in the arra
 * @max: size of each elemen
 * Return: pointer to allocated memo
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < (max - min) + 1; i++)
		p[i] = min + i;
	return (p);
}
