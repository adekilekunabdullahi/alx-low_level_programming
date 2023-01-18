#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - a function that prints a name
 *@name: name to print.
 *@f: pointer to function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}
