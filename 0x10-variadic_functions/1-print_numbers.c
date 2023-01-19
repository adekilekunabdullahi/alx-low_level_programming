#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@separator: separator between numbers.
 *@n: The number of numbers to print.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i < n - 1)
			printf("%c ", *separator);
	}
	printf("\n");
}
