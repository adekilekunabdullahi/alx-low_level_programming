#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *@str:string to copied to allocated memory.
 *Return: return copied string
 */
char *_strdup(char *str)
{
	char *array;

	unsigned int i, b;

	b = (int) sizeof(str) / sizeof(char);

	array = malloc(sizeof(char) * b);
	if (str == NULL)
		return (NULL);
	else if (array == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
		array[i] = str[i];
	return (array);
}
