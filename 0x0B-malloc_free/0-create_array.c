#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - a function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array
 * @c:character to initialize to
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array;

	array = (char *) malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

