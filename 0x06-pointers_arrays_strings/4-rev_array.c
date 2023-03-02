#include "main.h"
#include <string.h>
/**
 * reverse_array - prints half of a string
 * @a: input
 * @n: input
 */
void reverse_array(int *a, int n)
{
	int i;
	int b[100];

	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[n - i - 1];
	}
}
