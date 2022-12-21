#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: Parameter to copied to
 * @src: parameter to copied from
 * @n: values to copy
 * Return: copied strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
