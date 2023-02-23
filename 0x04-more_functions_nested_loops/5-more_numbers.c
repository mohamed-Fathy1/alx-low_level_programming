#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j, a, b;

	for (i = 1; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
		if (j < 10)
		{
			a = j;
		}
		else
		{
			a = j / 10;
		}
		b = j % 10;
		_putchar('0' + a);
		if (j > 9)
		{
			_putchar('0' + b);
		}
	}
	_putchar('\n');
	}
}
