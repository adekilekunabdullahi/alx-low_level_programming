#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul = mul * atoi(argv[i]);
	printf("%i\n", mul);
	return (0);
}
