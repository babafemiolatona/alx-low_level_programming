#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * in an unsigned long integer
 *
 * @n: number to check
 * @index: index of the bit to check (starting from 0)
 *
 * Return: value of the bit at the given index (0 or 1),
 * or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
