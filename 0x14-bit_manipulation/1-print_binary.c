#include "main.h"
/**
 * print_binary - function that prints a decimal number in binary format.
 *@n: decimal number
 *
 */
void print_binary(unsigned long int n)
{
	int i, a;

	for (i = 10; i >= 0; i--)
	{
		a = n >> i;
		if (a & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
