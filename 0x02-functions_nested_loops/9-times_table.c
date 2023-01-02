#include "main.h"
#include <stdio.h>
void times_table(void)
{
	int a;

	int b;

	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			printf("%d%s", c , b < 9 ? ", " : "");
		}
		puts("");
	}
	puts("");;
}
