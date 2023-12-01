#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table.
 * If something went wrong return NULL.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned int i;

	hash_t = malloc(sizeof(hash_node_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	{
		/*free(hash_t);*/
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;

	return (hash_t);
}
