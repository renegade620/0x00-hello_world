#include "main.h"

/**
 * print_sign - check details
 *
 * @n: input integer
 *
 * Description - prints sign of a number
 *
 * Return: 1 when number is positive, 0 when zero and -1 when negative
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		x = -1;
		_putchar('-');
	}
	return (x);
}
