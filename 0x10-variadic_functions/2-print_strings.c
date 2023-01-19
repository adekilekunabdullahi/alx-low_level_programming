#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings using variadic function.
 *@separator: sepator of words
 *@n: number of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list p;

	if (!*separator)
		return;
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(p, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%c ", *separator);
	}
	va_end(p);
	printf("\n");
}
