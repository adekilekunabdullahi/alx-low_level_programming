#include "main.h"
#include <strings.h>
#include <stdlib.h>
/**
 *_calloc - a function that allocates memory for an array, using malloc
 *@nmemb: array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	bzero(array, nmemb * size);
	return (array);
}

