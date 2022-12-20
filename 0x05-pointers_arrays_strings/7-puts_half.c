#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: value to print to half
 */
void puts_half(char *str)
{
	size_t len, i, j, mid, a;

	char right[250];

	len = strlen(str);
	mid = len / 2;
	if (len % 2 == 0)
	{
		for (i = mid; a = 0;  i <= len; i++, a++)
		{
			right[a] = str[i];
			_putchar(right[a]);
		}
	}
	else
	{
		j = (len - 1) / 2;
		for (i = j; a = 0; i <= len; i++, a++)
		{
			right[a] = str[i];
			_putchar(right[a]);;
		}
	}
	/*_putchar('\n');*/
}
