#include "main.h"

/**
 * _strstr - locates a substring in a string.
 *
 * @haystack: pointer to the string to be searched.
 *
 * @needle: pointer to the substring to be located.
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			++h;
			++n;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		++haystack;
	}
	return (NULL);
}
