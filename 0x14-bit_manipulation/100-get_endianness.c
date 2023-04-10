#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * get_endianness- function
 * Return: int
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr;

	ptr = (char *)&n;
	return (*ptr);
}
