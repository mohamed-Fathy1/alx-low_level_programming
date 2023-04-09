#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function
 * @n: input
 * @m: input
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip > 0)
	{
		count += (flip & 1);
		flip >>= 1;
	}
	return (count);
}
