#include "main.h"
#include <ctype.h>

/**
 * print_sign - check if typed input is lowercase
 *
 * @c: takes parameter c type of int and ckeck of its lowercase
 *
 * Return: return 1 if lowercase else return 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
