#include <stdio.h>
#include "main.h"

/**
 * get_bits - function
 * @n: input
 * @index: input
 * @i: input
 * Return: int
 */
int get_bits(unsigned long int n, unsigned int index, unsigned int i)
{
	if (index < i)
		return (-1);

	if (index == i)
		return (n & 1);
	if (n > 1)
		get_bits(n >> 1, index, i + 1);
	else
		return (-1);
	return (get_bits(n >> 1, index, i + 1));
}
/**
 * get_bit - function
 * @n: input
 * @index: input
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (get_bits(n, index, 0));
}

