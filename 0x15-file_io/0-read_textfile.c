#include "main.h"
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
	ssize_t w, r;
	int fd;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY | O_CREAT);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buffer, r);
	if (w != r)
		return (0);
	free(buffer);
	close(fd);

	return (w);
}
