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
	int *array, i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i] = i;
	return (array);
}
