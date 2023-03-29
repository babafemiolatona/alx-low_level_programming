#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer to destination input
 *
 * @src: pointer to source input
 *
 * Return: pointer to resulting string
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
