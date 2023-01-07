#include <stdio.h>
/**
 * main - function that prints its name
 * @argc: - number of parameters.
 * @argv: arrays of parameters.
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (*argv != 0)
		printf("%d\n", argc - 1);
	return (0);
}
