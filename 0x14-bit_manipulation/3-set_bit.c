/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: pointer to int of a given number.
 * @index: index of the particular bit.
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL)
		return (-1);
	if (index < sizeof(unsigned long int) * 8)
	{
		*n |= (1 << index);
		return (1);
	}
	return (-1);
}
