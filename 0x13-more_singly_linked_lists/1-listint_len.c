#include "lists.h"
/**
 * listint_len - function that returns the number of nodes
 * in a linked listint_t list.
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
