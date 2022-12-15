#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("%s", "FizzBuzz");
		else
			if (a % 3 == 0)
				printf("%s", "Fizz");
			else if (a % 5 == 0)
				printf("%s", "Buzz");
			else
				printf("%d", a);
		printf("%c", ' ');
	}
	putchar('\n');
	return (0);
}
