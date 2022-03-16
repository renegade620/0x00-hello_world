#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fibonacci to 50
 *
 * Return: 0
 */
int main(void)
{
	int i = 0, j = 1, k = 2;

	for (i = 0; i < 50; ++i)
	{
		if (i == 0)
			printf("%d", j);
		else if (i == 1)
			printf("%d", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %d", k);
		}
	}
	printf("\n");
	return (0);
}
