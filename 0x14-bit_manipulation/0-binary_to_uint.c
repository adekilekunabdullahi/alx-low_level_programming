#include <stdlib.h>
/**
 * binary_to_uint - a function that comverts binary to decimal.
 * @b: number to convert.
 * Return: converted decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, k = 1, sum = 0;
	int c;

	if (!b)
		return (0);
	for (a = 0; b[a] != 0; a++)
	{
	}
	for (c = a - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
			sum += k;
		k *= 2;
	}
	return (sum);
}
