#include <stdlib.h>
#include "lists.h"

/*
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to head
 * @n: integer
 *
 * Return: address of the new element if Success, NULL if failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}

