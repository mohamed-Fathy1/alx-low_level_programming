#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - prints half of a string
 * @s: input
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (!isupper(s[i]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
