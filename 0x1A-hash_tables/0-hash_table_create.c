#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table
 * @size: a parameter
 * Return: a pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = calloc(new->size, sizeof(hash_node_t *));
	if (!new->array)
		return (NULL);
	for (i = 0; i < new->size; i++)
		new->array[i] = NULL;
	return (new);
}
