#include "main.h"

/**
 * flip_bits - calculates the number of bits needed
 * to flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that need to be flipped
 * to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}

