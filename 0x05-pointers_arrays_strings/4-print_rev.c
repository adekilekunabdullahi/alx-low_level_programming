#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - a function
 * @s: a manner
 */
void print_rev(char *s)
{
	int a, len, c,  b;

	len = strlen(s);
	c = len - 1;
	for (a = 0; a < len - 1; a++)
	{
		b = s[a];
		s[a] = s[len -1];
		s[len - 1] = b;
		c--;
		_putchar(b);
	}

}
int main(void)
{
	char *str;

	    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	        print_rev(str);
		    return (0);
}
