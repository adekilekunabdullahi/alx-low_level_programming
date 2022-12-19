#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - a function
 * @s: a manner
 */
void print_rev(char *s)
{
	int l, i;

	char *begin_ptr, *end_ptr, ch;

	l = strlen(s);
	begin_ptr = s;
	end_ptr = s;
	for (i = 0; i < l - 1; i++)
		end_ptr++;
	for (i = 0; i < l / 2; i++) {
		ch = *end_ptr;
	 	*end_ptr = *begin_ptr;
	 	*begin_ptr = ch;
		begin_ptr++;
	 	end_ptr--;
 	}
}
int main(void)
{
	    char *str;

	        str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
		    print_rev(str);
		        return (0);
}

