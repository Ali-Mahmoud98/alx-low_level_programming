#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 *
 * @head: pointer to pointer to listint_t
 * @n: int value
 *
 * Return: the address of the new Node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *cur = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (cur->next != NULL)
		cur = cur->next;

	cur->next = newNode;

	return (newNode);
}
