#include "main.h"
/**
 * string_toupper - a function that converts lower case strings to upper case
 * @n: lower case strings.
 * Return: upper case strings.
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
	}
	return (n);
}
