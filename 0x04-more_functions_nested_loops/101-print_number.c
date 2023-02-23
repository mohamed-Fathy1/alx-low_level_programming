#include <stdlib.h>
#include "main.h"

/**
 * print_number - check the code
 *
 * @n: first argumebt
 *
 * Return: 0 (secuses)
 */
void print_number(int n)
{
	int power;

	power = 1;
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		n = abs(n);
		_putchar('-');
	}
	while (n > power)
		power *= 10;
	power /= 10;
	while (n != 0)
	{
		int digit = n / power;

		_putchar('0' + digit);
		if (digit != 0)
			n = n - (digit * power);
		if (power != 1)
			power /= 10;
	}
}
