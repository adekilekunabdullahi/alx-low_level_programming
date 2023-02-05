#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints a decimal number in binary format.
 *@n: decimal number
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
