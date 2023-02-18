#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int c;
	int i;

	c = 0;
	while (c <= 9)
	{
		putchar('0' + c);
		putchar('0' + i);
		if (c < 9 || i < 9) 
		{
			putchar(',');
			putchar(' ');
		}
		if (i >= 9)
		{
			i = 0;
			c++;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');
	return (0);
}
