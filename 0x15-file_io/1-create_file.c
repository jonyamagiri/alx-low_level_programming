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
	int fd, writ, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	writ = write(fd, text_content, i);

	if (fd == 1 || writ == -1)
		return (-1);

	close(fd);
	return (1);
}
