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

	char j;

	while (x < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		x++;
	}
}
