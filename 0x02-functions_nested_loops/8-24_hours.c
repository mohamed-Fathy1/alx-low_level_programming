#include "main.h"
#include "1-alphabet.c"
#include <stdio.h>
/**
 * jack_bauer - check the code
 *
 * Return: No return type (void).
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		if (i == 2 && j > 3)
		{
			break;
		}
			for (k = 0; k <= 5; k++)
			{
			for (m = 0; m <= 9; m++)
			{
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + m);
			_putchar('\n');
			}
			}
		}
	}
}
