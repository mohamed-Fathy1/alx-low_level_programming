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
	int count;

	count = 0;
	while (*s)
	{
		s++;
		count++;
	}
	s--;
	while (count)
	{
		putchar(*s);
		s--;
		count--;
	}
	putchar('\n');
}
