#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * 
 */
void print_alphabet_x10(void)
{
	int x = 0;

	char j = 'a';

	while (x < 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		x++;
	}
}
