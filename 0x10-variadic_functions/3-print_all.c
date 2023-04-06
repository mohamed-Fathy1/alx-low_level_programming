#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_all - function
 * @format: input
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int n;
	char *p;
	char *sep = "";

	n = strlen(format);
	va_start(ap, format);
	if (format)
	{
		while (i < n)
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 's':
					p = va_arg(ap, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", sep, p);
					break;
				default:
					i++;
					continue;
			}
			i++;
			sep = ", ";
		}
	}
	printf("\n");
	va_end(ap);
}
