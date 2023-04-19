#include "function_pointers.h"

/**
 * int_index - searches for the first integer in an integer
 * array that matches a given condition
 *
 * @array: integer array to be searched
 * @size: number of elements in the array
 * @cmp: function pointer to the function used to compare values
 *
 * Return: The index of the first element for which the cmp function
 *  does not return 0, or -1 if no element matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

