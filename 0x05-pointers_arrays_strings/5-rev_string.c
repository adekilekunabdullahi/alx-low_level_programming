#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: a parameter to reversed.
 */
void rev_string(char *s)
{
	int a = 0;

	int i,tmp;

	for (i = 0; s[i] != '\0'; i++)
	for (a = 0; a < i/2; a++)
	{
		tmp = s[a];
		s[a] = s[i -1 -a];
		s[i - 1 - a] = tmp;
	}
	_putchar('\n');
}
