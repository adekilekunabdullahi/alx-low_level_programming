#include "main.h"
/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: size of memeory to appoint
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *array;
	array = malloc(sizeof(*array)
