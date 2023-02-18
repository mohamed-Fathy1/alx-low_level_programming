#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	int  b;

	b = 0;
	c = 'a';
	while (b <= 9)
	{
		putchar('0' + b);
		b++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
