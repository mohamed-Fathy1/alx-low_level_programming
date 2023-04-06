#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * @argv: input
 * @argc: input
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, result;

	result = 1;
	if (argc <= 2)
	{
		printf("Error\n");
		exit(98);
	}	
	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);
		if (!x)
		{
			printf("Errror\n");
			exit(98);
		}

		result = result * x;
	}
		printf("%d\n", result);
	return (0);
}
