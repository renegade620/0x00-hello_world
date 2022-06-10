#include <stdlib.h>
#include "lists.h"

/*
 * dlistint_len - returns the number of elements in a linked list
 * @h: list head
 *
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
