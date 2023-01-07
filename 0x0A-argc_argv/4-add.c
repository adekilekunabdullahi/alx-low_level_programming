#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i, adds = 0;

	for (i = 0; i < argc; i++)
		adds = adds + atoi(argv[i]);
	printf("%d\n", adds);
	return (0);
}
