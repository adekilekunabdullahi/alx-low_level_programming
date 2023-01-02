#include "main.h"
#include "stdio.h"
/**
 *_strchr - a function that locates a character in a string.
 *@s: strings to search from.
 *@c: character to search.
 * Return: position of c.
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
