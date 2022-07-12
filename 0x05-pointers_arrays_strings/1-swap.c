#include "main.h"
#include <stdio.h>
/**
 * swap_int - a function
 * @a: a medium
 * @b: always
 */
void swap_int(int *a, int *b)
{
	int sup = *a;
	*a = *b;
	*b = sup;
}
