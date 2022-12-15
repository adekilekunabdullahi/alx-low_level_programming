#include "main.h"
/**
 *print_most_numbers - Entry point
 *
 */
void print_most_numbers(void)
{
	int b = 48;

	while (b <= 57)
	{
		if (b != 50 && b != 52)
		{
			_putchar(b);
		}
		b++;
	}
	_putchar('\n');
}
