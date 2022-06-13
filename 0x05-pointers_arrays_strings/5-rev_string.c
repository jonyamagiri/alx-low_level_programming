#include "main.h"

/**
  * rev_string - Entry point
  * @s: pointer to a string
  * Description: Function reverses a string input
  * Return: void
  */

void rev_string(char *s)
{
	int length, i;
	char *start, *finish = s;
	char temp;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		finish++;
	}
	length = i + 1;
	start = s;
	for (i = 0; i < length / 2; i++)
	{
		temp = *finish;
		*finish = *start;
		*start = temp;
		start++;
		finish--;
	}
	finish[length + 1] = '\0';
}
