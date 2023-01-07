#include <stdio.h>
/**
 * main - function that prints its name
 * @argc: - number of parameters.
 * @argv: arrays of parameters.
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", *argv);
	return (0);
}
