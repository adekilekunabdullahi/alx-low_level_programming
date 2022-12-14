#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @a: parameter
 * Return: last digit
 */
int print_last_digit(int a)
{
	int b;

	if (a > 0)
	{
		b = a % 10;
		_putchar(b + '0');
		return (b);
	}
	else
	{
		b = -(a % 10);
		_putchar(b + '0');
		return (b);
	}
}
