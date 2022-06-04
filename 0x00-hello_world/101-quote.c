#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - Entry point
 *
 *Description: Prints an error quote, followed by a new line,
 *to the standard error
 *
 *Return: (1)
 */

int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59, 1, stderr);

	return (1);
}
