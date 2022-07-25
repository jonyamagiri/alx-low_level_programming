#include "main.h"

/**
* create_file - function that creates a file
* @filename: the name of the file to create
* @text_content:  is a NULL terminated string to write to the file
* Return: 1 (on success)
* -1 (on failure, file can not be created or file can not be written)
*/

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	for (;text_content[i];)
	{
		i++;
	}

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	else
		write(fd, text_content, i);

	close(fd);
	return (1);
}
