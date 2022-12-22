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
		if (n[0] >= 'a' && n[0] <= 'z')
		{
			n[0] -= 32;
			continue;
		}
		if (n[i] == ' ')
		{
			++i;
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] -= 32;
				continue;
			}
		}
		else
		{
			if (n[i] >= 'A' && n[i] <= 'Z')
			{
				n[i] += 32;
			}
		}
	}
}
