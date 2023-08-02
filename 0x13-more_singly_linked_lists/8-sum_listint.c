#include "lists.h"
/**
 * sum_listin - returns the sum of all the data (n) of a
 * listint_t linked list.
 *
 * @head: pointer to listint_t.
 *
 * Return: sum or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cur = head;

	if (head == NULL)
		return (sum);

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);
}
