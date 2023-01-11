#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 *str_concat - a function that concatenates two strings.
 *@s1: concat to string 1
 *@s2: string to concat
 *Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, i;

	char *s3
		;
	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
			;
	if (s2 == NULL)
		a = 0;
	else
		for (a = 0; s2[a] != '\0'; a++)
			;

	c = a + i + 1;
	s3 = malloc(sizeof(char) * c);
	if (s3 == NULL)
		return (NULL);
	for (b = 0; b < i; b++)
		s3[b] = s1[b];
	for (b = 0; b < a; b++)
		s3[b + i] = s2[b];
	s3[b + i] = '\0';
	return (s3);
}
