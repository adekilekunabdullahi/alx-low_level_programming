#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Return: empty
 */

void print_alphabet(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
	{
		_putchar(q);
		_putchar('\n');
	}
}
