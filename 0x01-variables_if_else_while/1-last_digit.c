#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - betty style doc for function main goes there
 * Return: 0
 */
int main(void)
{
	int n;

	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d", l);
		printf(" and is greater than 5\n");
	}
	else if (l == 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", l);
		printf(" and is 0\n");
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", l);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
