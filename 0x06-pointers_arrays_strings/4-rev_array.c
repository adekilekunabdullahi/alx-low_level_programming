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
	int i, j;

	int tmp, *start, *end;

	start = a;
	end = a;
	for (i = 0; i < n - 1; i++)
		end++;
	for (j = 0; j < n / 2; j++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
}
