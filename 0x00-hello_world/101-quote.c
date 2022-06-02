#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Program that prints to screen without use of printf and puts
 *
 * Return: (1)
 */


int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
