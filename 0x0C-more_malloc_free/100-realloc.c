#include "main.h"
#include <stdlib.h>
/**
 *_realloc - a function that reallocates a memory block using malloc and free
 *@ptr: pointer to previous allocated memory
 *@old_size: old_size
 *@new_size: new_size
 *Return: pointer to new array.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *good;

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		good = malloc(new_size);
		free(ptr);
	}
	if (!ptr)
	{
		ptr = malloc(new_size);
	}
	if (!new_size && ptr)
	{
		free(ptr);
	}
	return (good);
}
