#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: one of the to be swapped integers
 * @b: another of the to be swapped integers
 *
 * Return: nothings
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
