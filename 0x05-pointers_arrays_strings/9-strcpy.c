#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - a function that  copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: a parameter to copy to.
 * @src: a parameter to copy from
 * Return: character copied.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
