#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: value to print to half
 */
void puts_half(char *str)
{
	size_t len, i, j, mid;

	len = strlen(str);
	mid = len / 2;
	if (len % 2 == 0)
	{
		for (i = mid; i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		j = (len + 1) / 2;
		for (i = j; i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
