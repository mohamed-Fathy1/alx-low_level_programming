#include <string.h>
#include <stdio.h>
/**
 * _strchr - main function
 *
 * @s: first input
 * @c: second input
 *
 * Return: char pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
