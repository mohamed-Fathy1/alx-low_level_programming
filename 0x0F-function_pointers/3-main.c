#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - check the code
 * @argc: input
 * @argv: input
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *opre;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	opre = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(opre) == NULL || opre[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*opre == '/' || *opre == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opre)(a, b));
	return (0);
}
