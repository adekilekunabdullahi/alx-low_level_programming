#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function for arithmetic operations
 * @argc: numbers of parameters
 * @argv: array of parameters
 * Return: success
 */
int main(int argc, char **argv)
{
	int r;
	char *a = argv[argc - 2];
	int b = atoi(argv[argc - 1]);
	int c = atoi(argv[argc - 3]);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	r = get_op_func(a)(c, b);
	printf("%d\n", r);
	return (0);
}
