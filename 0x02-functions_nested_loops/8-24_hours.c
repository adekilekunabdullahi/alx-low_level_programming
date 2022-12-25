#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to
 *
 *
 */
void jack_bauer(void)
{
	int a = 0;

	int b;

	while (a < 24)
	{
		for (b = 0; b < 60; b++)
		{
			printf("%d:%d", a, b);
			puts("");
		}
		a++;
	}
}
