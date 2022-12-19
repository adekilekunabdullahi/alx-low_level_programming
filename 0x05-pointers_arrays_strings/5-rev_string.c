#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: a parameter to reversed.
 */
void rev_string(char *s)
{
	int a, i;

	i = strlen(s);
	for (a = i - 1; a >= 0; a--)
		_putchar(s[a]);
}
