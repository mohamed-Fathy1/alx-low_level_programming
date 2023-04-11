#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function
 * @filename: input
 * @letters: input
 * Return: size_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_direc, witre, t;

	file_direc = open(filename, O_RDONLY);

	if (file_direc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	t = read(file_direc, buffer, letters);
	witre = write(STDOUT_FILENO, buffer, t);
	free(buffer);
	close(file_direc);

	return (witre);
}
