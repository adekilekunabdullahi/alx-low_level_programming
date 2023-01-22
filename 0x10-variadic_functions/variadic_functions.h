#ifndef A
#define A
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_f(char *separator, va_list p);
int _putchar(char c);
void print_s(char *separator, va_list p);
void print_i(char *separator, va_list p);
void print_c(char *separator, va_list p);
/**
 * struct abc - a structure
 * @c: a string
 * @d: pointer to function
 */
typedef struct abc
{
	char *c;
	void (*d)(char *separator, va_list p);
} ab;
#endif
