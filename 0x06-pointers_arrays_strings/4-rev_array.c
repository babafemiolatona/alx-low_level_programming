#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to int array
 *
 * @n: number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
