#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to dlistint_t.
 * @idx: index of node.
 * @n: integer.
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (cur)
	{
		if (count == idx)
		{
			new->next = cur;
			new->prev = cur->prev;
			cur->prev->next = new;
			cur->prev = new;
			return (new);
		}
		if (cur->next == NULL)
		{
			add_dnodeint_end(h, n);
			return (new);
		}
		cur = cur->next;
		count++;
	}
	return (NULL);
}
