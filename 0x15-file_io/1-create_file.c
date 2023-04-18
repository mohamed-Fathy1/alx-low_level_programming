#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - function
 * @filename: input
 * @text_content: input
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (text_content)
		len = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, len);

	close(fd);
	return (1);
}
