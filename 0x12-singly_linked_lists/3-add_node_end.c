#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to pointer to head.
 * @str: string
 *
 * Return: pointer to list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cur = *head;
	list_t *new = malloc(sizeof(list_t));
	unsigned int len = 0;
	if (new == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (cur->next != NULL)
		cur = cur->next;
	cur->next = new;

	return (new);
}
