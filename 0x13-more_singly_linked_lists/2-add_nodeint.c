#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list.
 *
 * @head: pointer to pointer to listint_t.
 * @n: integer value to be added
 *
 * Return: address of new node or NULL if faild to add new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t* newNode = malloc(sizeof(listint_t));
	
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
