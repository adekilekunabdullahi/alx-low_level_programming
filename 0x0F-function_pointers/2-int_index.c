#include <stdio.h>
/**
 *int_index - function that searches for an integer.
 *@array: an array to search for a particular integer.
 *@size: size of the array
 *@cmp: pointer to a function
 *Return: index of the number.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, a;

	if (!array || !size || size < 0 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		a = cmp(array[i]);
		if (a != 0)
			return (i);
	}
	return (-1);
}
