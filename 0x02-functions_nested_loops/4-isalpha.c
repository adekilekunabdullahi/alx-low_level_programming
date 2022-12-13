#include <stdio.h>
/**
 * _isalpha - a function
 * Return: Always 0
 * @c: a parameter
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
