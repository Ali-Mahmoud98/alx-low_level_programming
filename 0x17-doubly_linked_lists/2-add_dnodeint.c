#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: pointer to pointer to dlistint_t.
 * @n: integer
 *
 * Return: new node or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *cur = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (cur->next)
	{
		cur = cur->next;
	}
	new->n = n;
	cur->prev = new;
	new->next = cur;
	new->prev = NULL;
	cur = new;
	*head = new;
	return (new);
}
