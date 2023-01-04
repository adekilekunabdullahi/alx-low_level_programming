#include "main.h"
/**
 *is_prime_number - function that checks if the input integer is a prime number
 *@n: number to check.
 *Return: 1(true) or 0(false)
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
