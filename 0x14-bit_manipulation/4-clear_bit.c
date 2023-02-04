#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to a given number.
 * @index: index of the given bit.
 * Return: 1 if successfuly cleared or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
