#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: First input parameter
 *
 * @src: Second input parameter
 *
 * Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
