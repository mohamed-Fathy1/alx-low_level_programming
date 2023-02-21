#include "main.h"
#include "1-alphabet.c"
#include <stdio.h>
/**
 * times_table - check the code
 *
 * Return: No return type (void).
 */
void times_table(void)
{
	int i, j, x, a, b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x > 9)
			{
			b = x % 10;
			a = (x - b) / 10; 
			_putchar('0' + a);
			_putchar('0' + b);
			}
			else
			{
			_putchar(' ');
			_putchar('0' + x);
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
