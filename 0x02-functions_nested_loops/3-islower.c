#include <ctype.h>

/*
 * _islower - check if typed input is lowercase
 *
 * Return: return 1 if lowercase else return 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
