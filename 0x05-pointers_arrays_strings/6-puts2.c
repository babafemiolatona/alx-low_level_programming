#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: Takes input
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}


