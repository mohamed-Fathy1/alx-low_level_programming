#include "main.h"
#include <string.h>
/**
 * _strncpy - prints half of a string
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
