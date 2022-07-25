#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: is the name of the file
* @text_content: is the NULL terminated string to add at the end of the file
* Return: 1 (on success, if the file exists)
* -1 (on failure, filename is NULL or if the file does not exist or if you do
* not have the required permissions to write the file)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writ, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	writ = write(fd, text_content, i);

	if (fd == -1 || writ == -1)
		return (-1);

	close(fd);
	return (1);
}
