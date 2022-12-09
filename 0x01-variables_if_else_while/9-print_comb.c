
#include <stdio.h>
int main()
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
