#include <ctype.h>

/**
 * _islower - check if typed input is lowercase
 *
 * @c: takes parameter c type of int and ckeck of its lowercase
 *
 * Return: return 1 if lowercase else return 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
