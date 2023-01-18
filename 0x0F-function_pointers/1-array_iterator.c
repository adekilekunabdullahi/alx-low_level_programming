#include "stdio.h"
/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 *@array: array of element.
 *@size: size of an array.
 *@action: pointer to a function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
