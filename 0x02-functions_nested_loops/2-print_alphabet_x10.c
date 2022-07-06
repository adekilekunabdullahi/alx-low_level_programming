#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	void print_alphabet_x10(void)
	{
		int x = 0;

		while (x < 10)
		{
			int j = 'a';

			while (j <= 'z')
			{
				_putchar(j);
				j++;
			}
			_putchar('\n');
			x++;
		}
	}
	return (0);
}
