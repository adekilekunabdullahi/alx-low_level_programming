#include "main.h"
#include <string.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str - a value to print
 */
void puts2(char *str)
{
	unsigned int i;

	for ( i = 0; i < strlen(str); i += 2)
		_putchar(str[i]);
}
