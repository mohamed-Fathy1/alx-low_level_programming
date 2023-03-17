#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another strin
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, a = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = malloc((strlen(s1) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		p[i] = s1[i];

	if (n < strlen(s2))
		p = realloc(p, (strlen(s1) + n + 1) * sizeof(char));
	else
		p = realloc(p, (strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	if (n < strlen(s2))
		for (; a < n; i++)
			p[i] = s2[a++];
	else
		for (; a < strlen(s2); i++)
			p[i] = s2[a++];
	p[i] = '\0';
	return (p);
}
