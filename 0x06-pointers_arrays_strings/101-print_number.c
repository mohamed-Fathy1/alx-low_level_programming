#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_number - prints half of a string
 * @n: input
 */
void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = abs(n);
	}

	if ((num / 10) != 0)
	{
		print_number((num / 10));
	}
	_putchar((num % 10) + '0');
}
