#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - prints half of a string
 * @s: input
 * Return: s
 */
char *cap_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (!isalpha(s[i - 1]) && !isdigit(s[i - 1]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
