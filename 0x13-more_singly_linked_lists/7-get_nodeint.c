#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: first node in the linked list
 * @index: index of the node
 *
 * Return: pointer to listint_t, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cur = head;

	while (cur != NULL && i < index)
	{
		cur = cur->next;
		i++;
	}

	if (cur == NULL)
		return (NULL);
	return (cur);
}
