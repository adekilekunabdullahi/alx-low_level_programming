
/*prototype of _putchar function*/
#include <unistd.h>
int _putchar(char c)
{
	return(write(1,&c,1));
}

void print_alphabet(void);
