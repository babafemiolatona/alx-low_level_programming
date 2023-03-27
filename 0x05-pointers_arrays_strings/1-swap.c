#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: First integer
 * 
 * @b: Second integer
 * 
 * Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;

	*a = *b;
	*b = temp;	
}