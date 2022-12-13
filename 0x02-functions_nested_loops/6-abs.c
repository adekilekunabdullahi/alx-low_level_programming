#include "main.h"
/*
 * abss -  a function that prints the absolute value
 * @a: parameter to print its absolute value
 * Return: a
 */
int _abss(int a)
{
	if (a < 0)
	{
		a = -1 * a;
		return (a);
	}
	else
		return (a);
}
