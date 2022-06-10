#include <stdlib>
#include "lists.h"

/*
 * print_dlistint - prints all the elements of a list
 * @h: list head
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0; //length of nodes
	while (h)
	{
		x++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
