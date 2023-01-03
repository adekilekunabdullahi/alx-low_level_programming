#include "main.h"
#include "stdio.h"
/**
 *print_diagsums - a function that prints the sum of the two diagonals of a
 *square matrix of integers.
 *@a:pointer to array
 *@size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, j, d, c = 0, b = 0;

	for (i = 0; i < size; i++)
	{
		d = (i * size) + i;
		c += *(a + d);
	}
	for (j = 0; j < size; j++)
	{
		d = (j * size) + (size - 1 - j);
		b += *(a + d);
	}
	printf("%d, %d\n", c, b);
}
