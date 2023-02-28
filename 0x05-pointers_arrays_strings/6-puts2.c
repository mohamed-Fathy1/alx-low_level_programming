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

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
