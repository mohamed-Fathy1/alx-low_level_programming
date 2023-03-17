#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and f
 * @ptr: pointer to the memory previsouly allocated by mal
 * @old_size: size of the allocated memory fo
 * @new_size: new size of the new memory blo
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *old_ptr;
	unsigned int i;

	old_ptr = ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = old_ptr[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			p[i] = old_ptr[i];
	}
	free(ptr);
	return (p);
}
