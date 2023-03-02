#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a == 0)
			{
				putchar('0');
			}
			printf("%d:", a);
			if (b < 10)
			{
				putchar('0');
			}
			printf("%d\n", b);
		}
	}
}
