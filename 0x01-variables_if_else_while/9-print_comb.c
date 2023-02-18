#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		putchar('0' + c);
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
