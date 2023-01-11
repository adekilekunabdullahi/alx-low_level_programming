#include "main.h"
#include <string.h>
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

	size_t len, i;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	array = (char *) malloc((len + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		array[i] = str[i];
	return (array);
}
