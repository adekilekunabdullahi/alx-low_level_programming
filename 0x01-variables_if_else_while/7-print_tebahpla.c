#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int b = 122;

	while (b >= 97)
	{
		putchar(b);
		b--;
	}
	putchar('\n');
	return (0);
}
