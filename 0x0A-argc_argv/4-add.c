#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

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

	result = 0;
	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);


		if (!check_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result = result + x;
	}
		printf("%d\n", result);
	return (0);
}
