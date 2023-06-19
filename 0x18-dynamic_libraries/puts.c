#include "main.h"

/**
 * _puts - prints a string followed by new line
 *
 * @str: Takes input
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
