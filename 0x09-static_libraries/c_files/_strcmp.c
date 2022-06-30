# include "main.h"

/**
  * _strcmp - Entry point
  * @s1: pointer to first string for comparison
  * @s2: pointer to second string for comparison
  * Description: Function that compares two strings
  * Return: 0 (if s1 == s2), -ve int (if s1 < s2), +ve int (if s1 > s2)
  */

int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	for (i = 0; (*(s1 + i)) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		return (0);
	}
	return (*s1 - *s2);
}
