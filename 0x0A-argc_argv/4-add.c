#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - function that prints its name
 * @argc: - number of parameters.
 * @argv: arrays of parameters.
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, adds = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
			adds = adds + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", adds);
	return (0);
}
