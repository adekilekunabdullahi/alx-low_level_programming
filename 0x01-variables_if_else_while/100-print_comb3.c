#include <stdio.h>
/**
 * main - a function
 * Return: 0
 */
int main(void)
{
	int a;

	int b;

	for (a = 48; a < 57; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
