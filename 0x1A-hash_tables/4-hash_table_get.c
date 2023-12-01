#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table you want to look into.
 * @key: key you are looking for.
 * Return: value associated with the element,
 * or NULL if key couldn’t be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	indx = key_index((const unsigned char *) key, ht->size);
	if (indx >= ht->size)
		return (NULL);
	node = ht->array[indx];
	while (node && strcmp(key, node->key) != 0)
		node = node->next;
	return ((node != NULL) ? node->value : NULL);
}
