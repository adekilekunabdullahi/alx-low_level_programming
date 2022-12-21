#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: a parameter to copied to.
 * @src: a parameter to copied from.
 * @n: number of strings to copied from src.
 * Return: concatenated strings.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (a < n && src[a] != '\0')
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
