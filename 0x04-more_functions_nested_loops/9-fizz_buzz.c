#include "main.h"
#include <stdio.h>
/**
 * fizzbuzz - a function that prints the numbers from 1 to 100, followed by
 * a new line. But for multiples of three print Fizz instead of the number
 *  and for the multiples of five print Buzz. For numbers which are 
 *  multiples of both three and five print FizzBuzz.
 * main - main function
 * Return: 0
 */
void fizzbuzz(void)
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
}
int main(void)
{
	fizzbuzz();
	return (0);
}
