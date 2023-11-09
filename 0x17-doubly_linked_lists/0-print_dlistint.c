#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;
	dlistint_t *cur = h;

	if (h == NULL)
		return (count);

	while (cur)
	{
		count++;
		printf("%d\n", cur->n);
		cur = cur->prev;
	}
	return (count);
}
