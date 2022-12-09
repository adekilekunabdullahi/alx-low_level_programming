
#include <stdio.h>
int main()
{
	int b = 48;

	int a = 48;

	int c = 48;

	int d = 48;

	while (b <= 57)
	{
		putchar(b);
		while (a <= 57)
		{
			putchar(a);
			putchar('\n')
			while (c <= 57)
			{
				putchar(c);
				while (d <= 57)
				{
					putchar(d);
					putchar(',');
					putchar(' ');
					d++;
				}
				c++;
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
