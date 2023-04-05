#include "main.h"

/**
 *_sqrt_recursion - find natural square root
 *
 * @n: int
 * @res: square root
 *
 * Return: int
 */

int square(int n, int res);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 *
 * @n: int to find square root
 * @res: square root
 *
 * Return: int
 */

int square(int n, int res)
{
	if (res * res == n)
	{
		return (res);
	}
	else if (res * res < n)
	{
		return (square(n, res + 1));
	}
	else
	{
		return (-1);
	}
}
