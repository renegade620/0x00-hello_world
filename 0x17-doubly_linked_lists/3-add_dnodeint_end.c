#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to head
 * @n: integer 
 *
 * Return: SUCCESS - return address of new element, FAILURE - NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tail = *head;
	if (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
	new->prev = tail;
	return (new);
}
