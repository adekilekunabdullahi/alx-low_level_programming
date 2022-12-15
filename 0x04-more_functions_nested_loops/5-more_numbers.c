#include "main.h"
/**
 * more numbers - a function
 *
 */
void more_numbers(void)
{
	char a;

	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = '0'; a <= '14'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
int main(void)
{
	more_numbers();
	return (0);
}
