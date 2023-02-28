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
	for (; *str != '\0'; str++)
	{
		if (*str % 2 == 0)
			_putchar(*str);
	}
	_putchar('\n');
}
