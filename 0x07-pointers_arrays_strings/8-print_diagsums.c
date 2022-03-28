#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonals of a square matrix
 *
 * @a: the matrix
 * @size: size of matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sumX = 0, sumY = 0;

	for (i = 0; i < size; i++)
	{
		sumX += a[(size + 1) * i];
		sumY += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sumX, sumY);
}
