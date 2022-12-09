#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int b = 48;

	while (b <= 57)
	{
		putchar(b);
		putchar(',');
		putchar(' ');
		b++;
	}
	putchar('\n');
	return (0);
}
