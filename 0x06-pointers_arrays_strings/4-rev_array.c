#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: numbers of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *x, y, z, s;

	x = a;

	for (y = 1; y < n; y++)
		x++;
	for (s = 0; s < y / 2; s++)
	{
		z = a[s];
		a[s] = *x;
		*x = z;
		x--;
	}
}
