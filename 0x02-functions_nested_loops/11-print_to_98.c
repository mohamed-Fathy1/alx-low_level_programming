#include "main.h"
#include "1-alphabet.c"
#include <stdio.h>
/**
 * print_to_98 - check the code
 *
 * @n: first parameter
 *
 * Return: No return type (void).
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}

		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}

		}
	}
	printf("\n");
}
