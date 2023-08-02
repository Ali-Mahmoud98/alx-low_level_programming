#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: head node’s data (n),
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *cur;
	int num;

	if (*head == NULL)
		return (0);

	num = (*head)->n;
	cur = (*head)->next;
	free(*head);
	*head = cur;

	return (num);
}
