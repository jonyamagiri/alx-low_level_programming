#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: pointer to the name of the file
* @letters:  is the number of letters it should read and print
* Return: 0 (if file can not be opened or read or filename is NULL
* Otherwise (the expected amount of bytes the function can read and print)
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, writ;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buf, letters);
	writ = write(1, buf, rd);

	if (fd == -1 || rd == -1 || writ == -1 || writ != rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);

	return (writ);
}
