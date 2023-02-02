#include "main.h"
#include <stddef.h>
#define SET 1
#define UN_SET 0
/**
 * isNthBitSet - a function that checks if pos is set
 * @data: ...
 * @pos: ...
 * Return: ...
 */
int isNthBitSet(unsigned long int data, unsigned int pos)
{
	return ((data & (1 << pos)) ? SET : UN_SET);
}
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to a given number.
 * @index: index of the given bit.
 * Return: 1 if successfuly cleared or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 0;

	if (n == NULL)
		return (-1);
	*n &= ~(1 << index);
	a = isNthBitSet(*n, index);
	if (!a)
		return (1);
	return (-1);
}
