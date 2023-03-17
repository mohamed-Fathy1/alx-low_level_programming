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
	unsigned int i, a = 0, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	p = malloc((len1 + 1) * sizeof(char));

	if (!p)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	if (n < len2)
		p = realloc(p, (len1 + n + 1) * sizeof(char));
	else
		p = realloc(p, (len1 + len2 + 1) * sizeof(char));

	if (!p)
		return (NULL);

	if (n < len2)
		for (; a < n; i++)
			p[i] = s2[a++];
	else
		for (; a < len2; i++)
			p[i] = s2[a++];
	p[i] = '\0';
	return (p);
}
