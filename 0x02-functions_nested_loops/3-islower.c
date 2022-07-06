#include <stdio.h>
#include "main.h"
/**
 * islower - check the code
 *
 * Return: Always 0.
 * @c: parameter passed
 */

int islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
