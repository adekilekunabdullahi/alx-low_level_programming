#include "main.h"
#include <stdio.h>
/**
 * _atoi - a function that convert a string to an integer
 * @s: a parameter
 * Return: i
 */
int _atoi(char *s)
{
	int sign = 1, i = 0, n = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + s[i] - '0';
		}
		else
			break;
		i++;
	}
	n *= sign;
	return (n);
}
