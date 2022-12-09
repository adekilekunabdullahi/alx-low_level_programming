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
		if (b < 57)
		{
			putchar(44);
			putchar(32);
		}
		b++;
	}
	putchar('\n');
	return (0);
}
