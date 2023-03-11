#include "main.h"
#include <string.h>
/**
 * _strcat - prints half of a string
 * @dest: input
 * @src: input
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
