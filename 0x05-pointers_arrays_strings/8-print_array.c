#include "main.h"
#include <stdio.h>
/**
 *print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 *@a: an array
 * @n: number of array
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d%s", a[i], i < n - 1 ? ", ": "");
	}
	printf("\n");
}
