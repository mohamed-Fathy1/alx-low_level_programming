#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - function
 * @filename: input
 * @text_content: input
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opened, witre, i = 0;

	if (filename)
		return (-1);

	if (!text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
	}
	opened = open(filename, O_WRONLY | O_APPEND);
	witre = write(opened, text_content, i);

	if (opened == -1 || witre == -1)
		return (-1);
	close(opened);

	return (1);
}
