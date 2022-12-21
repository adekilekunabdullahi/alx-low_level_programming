#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: a parameter to copied to.
 * @src: a parameter to copied from.
 * @n: number of strings to copied from src.
 * Return: concatenated strings.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (a < n && src[a] != '\0')
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
int main(void)
{
	    char s1[98] = "Hello ";
	        char s2[] = "World!\n";
		    char *ptr;

		        printf("%s\n", s1);
			    printf("%s", s2);
			        ptr = _strncat(s1, s2, 1);
				    printf("%s\n", s1);
				        printf("%s", s2);
					    printf("%s\n", ptr);
					        ptr = _strncat(s1, s2, 1024);
						    printf("%s", s1);
						        printf("%s", s2);
							    printf("%s", ptr);
							        return (0);
}
