#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list.
 *
 * @head: pointer to dlistint_t.
 * @index: unsigned int.
 *
 * Return: node, if the node does not exist, return NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (index == count)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
