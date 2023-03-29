#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: pointer to input string
 *
 * Return: @str
 */

char *rot13(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			*p = ((*p - 'A') + 13) % 26 + 'A';
		}
		else if (*p >= 'a' && *p <= 'z')
		{
			*p = ((*p - 'a') + 13) % 26 + 'a';
		}
		p++;
	}
	return (str);
}
