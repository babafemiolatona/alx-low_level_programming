#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: The string to be duplicated
 *
 * Return: A pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	dup_str = malloc(strlen(str) + 1);

	if (dup_str == NULL)
	{
		return (NULL);
	}
	strcpy(dup_str, str);

	return (dup_str);
}
