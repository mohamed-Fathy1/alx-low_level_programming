#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int mid = len / 2;

	for (i = mid; i < len; i++)
	{
		if (i % 2 == 1)
			mid = ((len + 1) / 2);
		_putchar(*(str + mid));
		str++;
	}
	_putchar('\n');
}
