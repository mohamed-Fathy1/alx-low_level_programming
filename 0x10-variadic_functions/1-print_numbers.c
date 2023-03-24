#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function
 * @separator: input
 * @n: input
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (n == 0)
	{
		exit(0);
	}
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
