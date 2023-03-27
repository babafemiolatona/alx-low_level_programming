#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: Takes input
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	int half_len = (len + 1) / 2; /*round up if len is odd*/

	for (i = half_len; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
