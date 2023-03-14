#include <stdlib.h>
#include <string.h>
/**
 * str_concat - main fuction
 * @s1: input
 * @s2: input
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int len = len1 + len2;
	char *p;

	p = (char *)malloc((len + 1)* sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		p[len1 + i] = s2[i];
	}
	return (p);
}
