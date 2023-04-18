#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char *create_buf(char *f);


/**
 * main - function
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, r_from;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	buffer = malloc(1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	r_from = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
	if (file_from == -1 || r_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (write(file_to, buffer, r_from) == -1 || file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	r_from = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r_from > 0);
	free(buffer);
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		exit(100);
	}
	return (0);
}
