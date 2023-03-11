#include <ctype.h>

/**
 * _isupper - check if a charcter is uppercase
 *
 * @c: is an integer
 *
 * Return: 1 is char is uppercase else return 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
