#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index.
 * @index: index of bit of given index
 * @n: number
 * Return: value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;
	if (bit == 1 || bit == 0)
		return (bit);
	return (-1);
}
