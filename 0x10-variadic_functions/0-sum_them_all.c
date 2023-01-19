#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *@n: number of numbers to print sum
 *Return: sum of numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
