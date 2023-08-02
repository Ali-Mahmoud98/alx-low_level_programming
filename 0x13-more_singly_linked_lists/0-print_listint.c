#include "lists.h"
/**
 * print_listint - print the linked list
 * @h: pointer to listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}