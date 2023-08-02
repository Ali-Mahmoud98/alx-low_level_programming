#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * 
 * @head: pointer to pointer to listint_t
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head;
	listint_t *ptr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	while (i <= index)
	{
		if (cur->next == NULL || cur == NULL)
			return (-1);
		if (i == index - 1)
		{
			ptr = cur->next;
			cur->next = ptr->next;
			ptr->next = NULL;
			free(ptr);
			return (1);
		}
		cur = cur->next;
		i++;
	}

	return (-1);
}
