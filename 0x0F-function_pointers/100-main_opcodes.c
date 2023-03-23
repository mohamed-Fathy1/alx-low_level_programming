#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byte, i;
	char *arr;

	if (argc != 2)
	{
		printf("Erorr\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Erorr\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
			printf("%02hhx\n", arr[i]);
		else
			printf("%02hhx ", arr[i]);
	}
	return (0);
}
