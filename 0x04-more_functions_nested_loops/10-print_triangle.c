#include "main.h"
void print_triangle(int n)
{
	int b;

	int c;

	int a;

	if (n == 0 || n < 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (c = 0; c < n; c++)
		{
			for (b = n - c; b < c; b--)
				_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
}
int main(void)
{
	print_triangle(5);
	return (0);
}
