#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - a function that concatenates two strings
 *@s1: first string
 *@s2: second string to copied n bytes from
 *@n: number of strings to copied.
 *Return: Copied strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;

	unsigned int a, b, c, i, j;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (n > j)
	{
		j = n;
	}
	array = (char *) malloc(sizeof(char) * (i + j + 1));
	if (array == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		array[a] = s1[a];
	for (b = 0; b < j; b++)
		array[b + i] = s2[b];
	array[i + j] = '\0';
	return (array);
}

