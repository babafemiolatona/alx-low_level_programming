#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 * Return: number of bytes in initial segment of s that consist of
 *	bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0' && *s != *p)
		{
			p++;
		}
		if (*p == '\0')
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
