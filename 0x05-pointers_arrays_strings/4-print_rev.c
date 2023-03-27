#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 *
 * @s: Takes input
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
