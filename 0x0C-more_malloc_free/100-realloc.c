#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: new_ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (new_ptr);
	}
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (new_ptr);
}
