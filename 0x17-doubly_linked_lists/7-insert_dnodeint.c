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
	dlistint_t *new = NULL;
	dlistint_t *cur;
	unsigned int count;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		cur = *h;
		count = 0;
		while (cur != NULL)
		{
			if (count == idx)
			{
				if (cur->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new == NULL)
						return (NULL);
					new->n = n;
					new->next = cur;
					new->prev = cur->prev;
					cur->prev->next = new;
					cur->prev = new;
				}
				break;
			}
			cur = cur->next;
			count++;
		}
	}
	return (new);
}
