#include "main.h"
/*
 * _abs -  a function that prints the absolute value
 * @a: parameter to print its absolute value
 * Return: a
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = -1 * a;
		return (a);
	}
	else
		return (a);
}
