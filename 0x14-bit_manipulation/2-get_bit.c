#include "main.h"
/** get_bit - function that returns the value of a bit at a given index.
 * @index: index of bit of given index
 * Return: value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int array[32];
	int i = 0;

	if (n <= 0)
		array[i] = 0;
	for (; n > 0; )
	{
		array[i++] = n % 2;
		n /= 2;
	}
	return (array[index]);
}
