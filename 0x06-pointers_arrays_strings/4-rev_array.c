#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses array of strings.
 * @a: Array of integer
 * @n: number of integer
 * Return: Null
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != n - 1)
		       printf(", ");
		 printf("%d%s", a[i]);
	}
	printf("\n");
}