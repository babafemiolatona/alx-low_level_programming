#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 *           the constant byte b
 *
 * @s: pointer to the memory area to be filled
 * @b: the byte value to be copied to the memory area
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num = 0;

	do {
		s[num] = b;
		num++;
	} while (num < n);
	return (s);
}
