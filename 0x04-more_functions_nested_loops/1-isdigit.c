#include <ctype.h>

/**
 * _isupper - check if a charcter is uppercase
 *
 * @c: is an integer
 *
 * Return: 1 is char is uppercase else return 0
 */
int _isdigit(int c)
{
	if (c <= 9 || c >= 0)
	{
		if (isdigit(c))
		{
			return (1);
		}
	}
	return (0);
}
