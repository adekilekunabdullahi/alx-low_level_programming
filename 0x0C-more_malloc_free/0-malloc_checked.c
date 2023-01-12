#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: size of memeory to appoint
 *Return: array
 */
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);
	return (array);
}
