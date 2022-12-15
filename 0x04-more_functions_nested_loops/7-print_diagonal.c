#include "main.h"
/**
 * print_diagonal - a function that draws a straight line in the terminal.
 * @n: a parameter
 */
void print_diagonal(int n)
{
	int b;

	int i;

	if (n < 0 || n == 0)
		_putchar('\n');
	else if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
