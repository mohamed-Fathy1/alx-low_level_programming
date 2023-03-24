#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - function
 * @separator: input
 * @n: input
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *p = va_arg(ap, char *);

		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");
		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
