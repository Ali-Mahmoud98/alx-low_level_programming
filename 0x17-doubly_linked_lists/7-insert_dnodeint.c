#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *cur;
	unsigned int count;

	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	cur = *h;
	count = 0;
	while (cur != NULL)
	{
		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = cur;
			new->prev = cur->prev;
			cur->prev->next = new;
			cur->prev = new;
			return (new);
		}
		cur = cur->next;
		count++;
	}
	return (NULL);
}
