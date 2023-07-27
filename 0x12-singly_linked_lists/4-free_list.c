#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free singly linked list
 *
 * @head: pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *next = NULL;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
