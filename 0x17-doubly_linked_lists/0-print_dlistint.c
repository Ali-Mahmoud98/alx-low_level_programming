#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;
	dlistint_t* cur = h;

	while (cur)
	{
		count++;
		printf("%d\n", cur->n);
		cur = cur->prev;
	}
	return (count);
}
