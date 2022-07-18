#include <stdio.h>
#include "main.h"
/**
 * *_memset - a recipient
 * @s: global
 * @b: a party
 * @n: desktop
 * Return: master
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
