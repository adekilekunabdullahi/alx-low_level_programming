#include <stdio.h>
/**
 * sumOfMultiples - function that calculates the sum of all the multiples of 3
 * or 5 below 1024 (excluded), followed by a new line.
 */
void sumOfMultiples(void)
{
	int a[2] = {3, 5};
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if ((i % a[0]) == 0 || (i % a[1]) == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
/**
 * main - entry point
 * Return: success
 */
int main(void)
{
	sumOfMultiples();
	return (0);
}
