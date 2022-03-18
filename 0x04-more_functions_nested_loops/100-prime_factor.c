#include <stdio.h>
#include <math.h>

/**
 * main - prints lathest prime factor of given number
 *
 * Return: 0
 */
int main(void)
{
	long int x, max, num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
			max = num / x;
	}
	printf("%ld\n", max);
	return (0);
}
