#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * leet - prints half of a string
 * @s: input
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int len = strlen(s);
	int len2 = strlen(a);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
