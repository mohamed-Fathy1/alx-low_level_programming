#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * set_bit - function
 * @n: input
 * @index: input
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
