#include "main.h"
/**
 * print_square - a function that draws a straight line in the terminal.
 */
void square(int n)
{
	int i;

	if (n < 0 || n == 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
			for (i = 0; i < n; i++)
				_putchar('#');
			_putchar('\n');
		_putchar('\n');
}
