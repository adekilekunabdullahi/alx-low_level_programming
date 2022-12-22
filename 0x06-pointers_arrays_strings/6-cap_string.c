#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @n: strings passed
 * Return: capitalized strings
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] -= 32;
				continue;
			}
		}
		if (n[i] == ' ' || n[i] == '.')
		{
			++i;
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] -= 32;
				continue;
			}
		}
		if (n[i] == '\n')
		{
			++i;
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] -= 32;
				continue;
			}
		}
		if (n[i] == '\t')
		{
			++i;
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] -= 32;
				continue;
			}
		}
	}
	return (n);
}
