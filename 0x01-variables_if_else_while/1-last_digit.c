#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - determine if last digit is greater or less than 5 or is zero
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_n = n % 10;
	if (last_n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_n);
	else if (last_n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_n);
	else if (last_n < 6 && last_n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_n);	
	return (0);
}
