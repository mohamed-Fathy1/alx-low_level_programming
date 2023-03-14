#include <stdlib.h>
/**
 * _strdup- main fuction
 * @str: input
 * Return: char
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	p = (char *)malloc((++len) * sizeof(*str));

	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
/*	p[len + 1] = '\0';*/
	return (p);
}
