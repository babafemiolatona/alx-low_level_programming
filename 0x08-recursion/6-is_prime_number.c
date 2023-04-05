#include "main.h"

/**
 * is_prime_number - check if n is a prime number
 *
 * @num:int
 * @n: int
 *
 * Return: 0 or 1
 */

int check_prime(int n, int num);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 *
 * @n: int
 * @num: int
 *
 * Return: int
 */

int check_prime(int n, int num)
{
	if (num >= n && n > 1)
	{
		return (1);
	}
	else if (n % num == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, num + 1));
	}
}
