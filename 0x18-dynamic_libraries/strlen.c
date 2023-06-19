#include "main.h"
#include <string.h>

/**
 * _strlen - returns length of a string
 *
 *@s: takes input
 *
 * Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
