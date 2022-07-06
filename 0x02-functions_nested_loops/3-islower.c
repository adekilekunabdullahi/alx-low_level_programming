#include <stdio.h>
#include "main.h"
/**
 * main - clone
 * test_islower - you'll
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int r
	int test_islower(int c)
	{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	};
	r = test_lower(108);
	_putchar(r +'0');
	r = test_lower('c');
	_putchar(r +'0');
	r = test_lower('I');
	_putchar(r +'0');
	r = test_lower('s');
	_putchar(r +'0');
	r = test_lower(70);
	_putchar(r +'0');
	r = test_lower(20);
	_putchar(r +'0');
	r = test_lower('U');
	_putchar(r +'0');
	r = test_lower('n');
	_putchar(r +'0');
	r = test_lower('o');
	_putchar(r +'0');
	_putchar('\n');
	return (0);
}
