#include "main.h"

int _strlen(char *s);
int palindrome(char *s, int start, int end);
int is_palindrome(char *s);

/**
  * _strlen - returns the length of a string
  * @s: input string to be evaluated
  * Return: length of the string
  */

int _strlen(char *s)
{
	int slen = 0;

	if (s[slen])
	{
		slen++;
		slen += _strlen(s + slen);
	}

	return (slen);
}

/**
  * palindrome - checks if a string is a palindrome
  * @s: input string to be evaluated
  * @start: character at start of string
  * @end: character at end of string
  * Return: -1 (if string is palindrome), otherwise 0
  */

int palindrome(char *s, int start, int end)
{
	if (start == end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	if (start <= end || start < end + 1)
	{
		return (palindrome(s, start + 1, end - 1));
	}

	return (1);
}

/**
  * is_palindrome - checks if the given string is a palindrome
  * @s: input string to be evaluated
  * Return: - 1 (if string is palindrome); otherwise 0
  */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length == 0)
	{
		return (1);
	}
	else
		return (palindrome(s, 0, length - 1));
}
