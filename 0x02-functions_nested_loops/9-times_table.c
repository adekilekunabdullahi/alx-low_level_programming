#include "main.h"
#include <stdio.h>
/**
 * times_table - a function to print 9 times table starting from zero
 */
void times_table(void)
{
	int a;

	int b;

	int c;

	int d;
	int array[10][10];

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			array[a][b] = a * b;
		}
	}
	for (d = 0; d < 10; d++)
	{
		for (c = 0; c < 10; c++)
		{
			if (c < 9)
				printf("%d%s", array[d][c], array[d][c + 1] < 10 ? ",  " : ", ");
			else
				printf("%d", array[d][c]);
		}
		puts("");
	}
}
