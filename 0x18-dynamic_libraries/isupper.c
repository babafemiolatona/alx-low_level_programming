#include "main.h"

/**
 * _isupper - check for uppercase character
 *
 *@c: takes number input
 *
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
