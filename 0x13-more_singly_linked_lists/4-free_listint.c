#include "lists.h"
/**
 * free_listint -  function that frees a listint_t list.
 * @head: pointer to pointer to listint_t.
 */
void free_listint(listint_t *head)
{
	listint_t *cur = head;

	while (cur != NULL)
	{
		head = cur->next;
		free(cur);
		cur = head;
	}
}
