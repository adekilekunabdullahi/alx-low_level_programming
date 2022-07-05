#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	{
		char q;
		for(q='a';q<='z';q++)
		{
			_putchar("\n",q);
		}
	}
	return (0);
}
