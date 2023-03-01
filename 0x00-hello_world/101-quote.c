#include <stdio.h>
#include <string.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char s[64];

	strcpy(s, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	fprintf(stderr, "%s\n", s);
	return (1);
}
