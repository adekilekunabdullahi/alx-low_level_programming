#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index.
 * @index: index of bit of given index
 * @n: number
 * Return: value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int array[32];
	int i = 0;
	unsigned int a;

	if (n == 0)
		return (0);
	for (; n > 0; )
	{
		array[i++] = n % 2;
		n /= 2;
		a++;
	}
	if (index > a)
		return (-1);
	return (array[index]);
}
