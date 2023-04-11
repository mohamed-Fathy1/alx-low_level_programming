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
	int a, b, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	a = open(argv[1], O_RDONLY);
	r = read(a, buf, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (a == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(b, buf, r);
		if (b == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(a, buf, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	if (close(a) == -1 || close(b) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		exit(100);
	}
	return (0);
}
/**
 * create_buf - function
 * @f: INPUT
 * Return: char *
 */
char *create_buf(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buf);
}
