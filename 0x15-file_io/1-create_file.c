#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function
 * @filename: input
 * @text_content: input
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int file_dirc, witre, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i])
			i++;
	}

	file_dirc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	witre = write(file_dirc, text_content, i);

	if (file_dirc == -1 || witre == -1)
		return (-1);

	close(file_dirc);

	return (1);
}
