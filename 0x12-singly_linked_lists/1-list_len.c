#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - calculates number of nodes
 * @h: pointer to const list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
        size_t numOfNodes = 0;

        while (h != NULL)
        {
                h = h->next;
                numOfNodes++;
        }

        return (numOfNodes);
}
