#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
        srand(time(0));
	n = rand() - RAND_MAX / 2;
	init l;
	l=n%10;
	if(l>5)
	{
	        printf("Last digit of%d ", n );
		printf(" is%d ", l);
		printf(" and is greater than%d\n ", l);
	}
	else
	{
	        if(l==0)
		{
		        printf("Last digit of %d", n);
			printf(" is %d", l);
			printf(" and is %d\n", l);
		}
		else
		{
			printf("Last digit of %d", n)
			printf(" is %d", l)
			printf(" and is less than 6 and not 0\n")
	return (0);
}
