#include <stdio.h>
int main(int argc, char **argv)
{
	if (*argv)
		printf("%i",argc - 1);
	return (0);
}
