#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node at a
 * given position.
 * @head: pointer to pointer to listint_t
 * @idx: index to add new node
 * @n: int
 *
 * Return: pointer to listint_t, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *cur = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || head == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = new;
		return (newNode);
	}

	for (i = 0; cur != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = cur->next;
			cur->next = newNode;
			return (newNode);
		}
		else
			cur = cur->next;
	}

	return (NULL);
}
