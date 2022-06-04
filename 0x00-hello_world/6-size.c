#include <stdio.h>
/**
 * main - Entry point
 *
 *Description: Prints the size of various types on 32/64 bit computer
 *
 *Return: Always success (0)
 */

int main(void)
{
	char ch;
	int in;
	long int li;
	long long int lli;
	float fl;

	printf("Size of a char: %zu byte(s)\n", sizeof(ch));
	printf("Size of int: %zu byte(s)\n", sizeof(in));
	printf("Size of long int: %zu byte(s)\n", sizeof(li));
	printf("Size of long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of float: %zu byte(s)\n", sizeof(fl));

	return (0);
}
