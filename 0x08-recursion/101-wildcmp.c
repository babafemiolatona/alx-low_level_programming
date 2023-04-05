#include "main.h"

/**
 * wildcmp - compares two strings and returns 1
 * if they can be considered identical, otherwise returns 0
 *
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (0);
	}
	if (*s1 == '\0')
	{
		return (*s2 == '\0');
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
