#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - print the linked list values
 * @h: pointer to const list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numOfNodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		numOfNodes++;
	}

	return (numOfNodes);
}
