#include "main.h"
/**
 * countSetBits - a function that count set bits
 * @a: number
 * Return: number of set bits
 */
unsigned long int countSetBits(int a)
{
	unsigned long int count = 0;

	while (a)
	{
		if (a & 1)
			count++;
		a >>= 1;
	}
	return (count);
}
/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number 1
 * @m: , 2nd number.
 * Return: number of b its you would need to
 * flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
