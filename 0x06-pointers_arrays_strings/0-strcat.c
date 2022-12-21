#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concat strings
 * @dest: a parameter to concatenate to
 * @src: a parameter to concatenate from
 * Return: concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (a = 0; src[a] != '\0'; a++, i++)
	{
		dest[i] = src[a];
	}
	dest[i] = '\0';
	return (dest);
}
