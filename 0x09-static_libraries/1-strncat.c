#include "main.h"
#include <string.h>
/**
 * _strncat - prints half of a string
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
