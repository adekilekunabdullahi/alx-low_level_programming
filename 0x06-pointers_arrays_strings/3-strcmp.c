#include "main.h"
#include <stdio.h>
/**
 * _strcmp - a function that compares two strings.
 * @s1: first parameter to compare
 * @s2: second parameter to compare
 *Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	unsigned char a, b;

	do {
		a = (unsigned char) *s1++;
		b = (unsigned char) *s2++;
		if (a == '\0')
			return (a - b);
	} while (a == b);
	return (a - b);
}
