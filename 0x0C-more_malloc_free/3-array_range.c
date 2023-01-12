#include "main.h"
#include <stdlib.h>
/**
 *array_range - a function that creates an array of integers.
 *@min: minimum integer value
 *@max:maximum integer value
 *Return: array
 */
int *array_range(int min, int max)
{
	int *array, i, b;

	if (min > max)
		return (NULL);
	b = max - min + 1
	array = malloc(sizeof(int) * b);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < b; i++, min++)
		array[i] = min;
	return (array);
}
