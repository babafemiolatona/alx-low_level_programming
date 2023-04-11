#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings and returns a
 * pointer to the concatenated string.
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[size1]; size1++)
		;

	for (; s2[size2]; size2++)
		;

	s = malloc((size1 + size2) * sizeof(*s1) + 1);

	if (s == 0)
		return (0);

	for (; i < (size1 + size2); i++)
	{
		if ((size1 - 1) < i)
			s[i] = s2[i - size1];
		else
			s[i] = s1[i];
	}

	s[i] = '\0';

	return (s);
}
