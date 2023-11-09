#include "lists.h"
/**
 *  free_dlistint - function that frees a dlistint_t list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
