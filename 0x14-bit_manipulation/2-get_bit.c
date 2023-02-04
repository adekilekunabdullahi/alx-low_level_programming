#include "main.h"
#include <stdio.h>
/**
 *get_bit - function that returns the value of a bit at a given index.
 * @index: index of bit of given index
 * @n: number
 * Return: value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (!n)
		return (-1);
	if (index < sizeof(unsigned long int) * 8)
	{
		bit = (n >> index) & 1;
		return (bit);
	}
	return (-1);
}
