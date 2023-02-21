#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - check if typed input is lowercase
 *
 * @c: takes parameter c type of int and ckeck of its lowercase
 *
 * Return: return 1 if lowercase else return 0
 */
int print_last_digit(int c)
{
	_putchar('0' + abs(c % 10));
	return (abs(c % 10));
}
