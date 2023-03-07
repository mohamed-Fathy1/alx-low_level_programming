#include <string.h>
/**
 * _strstr - main function
 *
 * @haystack: first input
 * @needle: second input
 *
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	long unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == strlen(needle))
			return (&haystack[i]);
	}
	return ('\0');
}
