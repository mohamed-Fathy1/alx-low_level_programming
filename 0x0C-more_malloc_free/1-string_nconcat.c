#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - main fuction
 * @s1: input
 * @s2: input
 * @n: input
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, a = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";

	p = malloc(strlen(s1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		p[i] = s1[i];

	if (n < strlen(s2))
		p = realloc(p, (strlen(s1) + n) * sizeof(char));
	else
		p = realloc(p, (strlen(s1) + strlen(s2)) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (; a < n; i++)
		p[i] = s2[a++];
	p[i] = '\0';
	return (p);
}
