#include <string.h>
#include <stdio.h>
/**
 * print_rev - main function
 *
 * @s: first parameter
 *
 */
void print_rev(char *s)
{
	int i, j;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		s++;
	}
	for (j = len; j >= 0; j--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
