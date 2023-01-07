#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints its name
 * @argc: - number of parameters.
 * @argv: arrays of parameters.
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul = mul * atoi(argv[i]);
	printf("%i\n", mul);
	return (0);
}
