#include <stdio.h>
int main(void)
{
	int a;

	int b;

	b = 65;
	a = 97;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
