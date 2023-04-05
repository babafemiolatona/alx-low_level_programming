#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: pointer to string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int start, int end);
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, 0, len - 1));
	}
}

/**
 * check_palindrome - helper function to check if string is a palindrome
 *
 * @s: pointer to string
 * @start: the index of the first character to check
 * @end: the index of the last character to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
}

