#include "main.h"
/**
 * print_number - a function that prints number without printf
 * @a: a parameter
 */
void print_number(int a)
{
	if (a < 0)
       	{
		_putchar('-');
                a = -a;
	}

	if (a == 0)
		_putchar('\0');
	if (a / 10)
		print_number(a / 10);
	_putchar(a % 10 + '0');
}
