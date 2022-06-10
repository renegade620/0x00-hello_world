#include <stdlib.h>
#include "lists.h"

/*
 * free_dlistint - frees list
 * @head: head of list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t ehad;

	while (head)
	{
		ehad = head->next;
		free(head);
		head = ehad;
	}
}
