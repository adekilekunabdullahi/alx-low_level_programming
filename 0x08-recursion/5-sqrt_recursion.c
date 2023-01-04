#include "main.h"
/**
 * find_sqrt - function that finds natural squareroot of a number
 * @num: number to find its natural squareroot.
 * @root: increment factor.
 * Return: squareroot of num.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural square root of number
 * @n: number parameter.
 * Return: to find_sqrt function.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
