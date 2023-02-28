#include "main.h"
#include <string.h>
/**
 * puts2 - main function
 *
 * @str: first parameter
 *
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (*str % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
