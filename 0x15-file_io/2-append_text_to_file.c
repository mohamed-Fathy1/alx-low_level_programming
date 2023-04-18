#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - function
 * @filename: input
 * @text_content: input
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
