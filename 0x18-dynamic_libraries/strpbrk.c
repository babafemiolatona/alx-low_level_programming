#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: Pointer to the null-terminated string to be searched.
 * @accept: Pointer to the null-terminated string containing the set of bytes
 *	to be searched for.
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *          or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;

		while (*p)
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
