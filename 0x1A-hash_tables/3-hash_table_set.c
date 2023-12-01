#include "hash_tables.h"

/**
* hash_node_create - creates a new hash_node_t node
* @node: pointer to hash_node_t
* @key: is key (pointer to char).
* @value: value assosiated with key (pointer to char).
*
* Return: 1 on SUCCESS, otherwise 0.
*/
int hash_node_create(hash_node_t **node, const char *key, const char *value)
{
    (*node) = malloc(sizeof(hash_node_t));
    if (*node == NULL)
        return (0);
    (*node)->key = strdup(key);
    if ((*node)->key)
    {
        free(*node);
        return(0);
    }
    (*node)->value = strdup(key);
    if ((*node)->value)
    {
        free((*node)->key);
        free(*node);
        return(0);
    }
    (*node)->next = NULL;
    return (1);
}

/**
* handle_collision - handle collision during set of node.
* @head: head of linked list at index.
* @node: pointer to hash_node_t.
* @key: is key (pointer to char).
* @value: value assosiated with key (pointer to char).
*
* Description: handle collision by updating existing key or
* inserting node at the beginning of linked list.
*
* Return: int.
*/
int handle_collision(hash_node_t **head, hash_node_t **node,
	const char *key, const char *value
)
{
	hash_node_t *tmp = *head;
	int result;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	result = hash_node_create(node, key, value);
	if (!result)
		return (0);
	(*node)->next = *head;
    *head = *node;
	return (1);
}

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: key can not be an empty string.
 * @value: value associated with the key. value must be duplicated.
 * value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *head = NULL, *node = NULL;
	unsigned long int index;
	int result = 1;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	head = ht->array[index];

	if (head == NULL)
		result = hash_node_create(&node, key, value);
	else
		result = handle_collision(&head, &node, key, value);

	if (!result)
		return (0);

	if (node)
		ht->array[index] = node;

	return (1);
}
