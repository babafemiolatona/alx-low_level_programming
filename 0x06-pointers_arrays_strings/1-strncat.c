#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: First input parameter
 *
 * @src: Second input parameter
 *
 * @n: Third input parameter
 *
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
