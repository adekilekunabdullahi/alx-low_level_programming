#include <stdlib.h>
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
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: pointer to int of a given number.
 * @index: index of the particular bit.
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int isBitSet = 0;

	if (n == NULL)
		return (-1);
	*n |= (1 << index);
	isBitSet  = isNthBitSet(*n, index);
	if (isBitSet)
		return (1);
	else
		return (-1);

}
