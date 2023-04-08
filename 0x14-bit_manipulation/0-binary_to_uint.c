#include <string.h>

/**
 * binary_to_uint - function
 * @b: input
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int len, total = 0;
	unsigned int base_2 = 1;

	len = strlen(b);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
			{
				total += base_2;
			}
			base_2 *= 2;
		}
		else
		{
			return (0);
		}

	}
	return (total);
}
