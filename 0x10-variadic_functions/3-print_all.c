#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_c - Prints a character of char type
 *@separator: The separator of the character
 *@p: A list of variadic arguments
 */
void print_c(char *separator, va_list p)
{
	printf("%s%c", separator, va_arg(p, int));
}
/**
 *print_s - Prints a strings
 *@separator: The separator of the character
 *@p: A list of variadic arguments
 */
void print_s(char *separator, va_list p)
{
	char *str = va_arg(p, char *);

	if (str)
		printf("%s%s", separator, str);
	else
		printf("%s%s", separator, "(nil)");
}
/**
 *print_i - Prints an integer
 *@separator: The separator of the character
 *@p: A list of variadic arguments
 */
void print_i(char *separator, va_list p)
{
	printf("%s%d", separator, va_arg(p, int));
}
/**
 *print_f - Prints a float
 *@separator: The separator of the character
 *@p: A list of variadic arguments
 */
void print_f(char *separator, va_list p)
{
	printf("%s%f", separator, va_arg(p, double));
}
/**
  * print_all - Prints anything
  * @format: The conversion specifier to prints
  *
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{

	int i, j;
	char *separator = "";
	va_list p;
	ab e[] = {
	{"c", print_c},
	{"i", print_i},
	{"f", print_f},
	{"s", print_s}
	};

	va_start(p, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *e[j].c)
			{
				e[j].d(separator, p);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(p);
	printf("\n");
}
