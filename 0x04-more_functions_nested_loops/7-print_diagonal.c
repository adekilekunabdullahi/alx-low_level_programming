#include "main.h"
/**
 * print_diagonal - a function that draws a straight line in the terminal.
 */
void print_diagonal(int n)
{
	int i;

	if (n < 0 || n == 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
			_putchar('\');
		_putchar('\n');
}

