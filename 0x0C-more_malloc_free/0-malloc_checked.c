#include <stdlib.h>
/**
 * malloc_checked - main fuction
 * @b: input
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
