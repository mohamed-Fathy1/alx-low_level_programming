#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char*)malloc(size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return p;
}
