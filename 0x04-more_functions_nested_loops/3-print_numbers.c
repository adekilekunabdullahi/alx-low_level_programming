#include "main.h"
/**
 *print_numbers - Entry point
 *
 *Return: Always 0 (success)
 */
void print_numbers(void)
{
	int b = 48;

	while (b <= 57)
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
