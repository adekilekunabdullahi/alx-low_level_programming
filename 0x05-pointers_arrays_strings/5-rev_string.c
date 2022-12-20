#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: a parameter to reversed.
 */
void rev_string(char *s)
{
	int i, len;

	char *st, *e, tmp;

	len = strlen(s);
	st = s;
	e = s;
	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		tmp = *e;
		*e = *st;
		*st = tmp;
		start++;
		end--;
	}
}
