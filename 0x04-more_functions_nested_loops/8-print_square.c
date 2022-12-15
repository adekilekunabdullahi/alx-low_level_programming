#include "main.h"
/**
 *print_square - a function that draws a straight line in the terminal.
 *@n: a parameter
 */
void print_square(int n)
{
	int i;

	int b;

	if (n < 0 || n == 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < n; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
