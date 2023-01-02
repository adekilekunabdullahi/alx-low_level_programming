#include "main.h"
#include <stdio.h>
/**
 *compare - a function that compares two strings
 *@X: String 1
 *@Y: String 2
 *Return: searched strings.
 */
int compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}
/**
 *_strstr - a function that locates a substring
 *compare - a function that compares two strings
 *@X: String 1
 *@Y: String 2
 *Return: searched strings.
 */
char *_strstr(char *X, char *Y)
{
	while (*X != '\0')
	{
		if (*X == *Y)
		{
			return (X);
		}
		X++;
	}
	return (NULL);
}
