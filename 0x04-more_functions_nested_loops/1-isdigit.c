#include "main.h"

/**
 * _isupper - checks for digit
 *
 *@c: takes input
 *
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0); 
}
