#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if it is big endian, 1 if it is little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	if (p[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
