#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 -  check description
 *
 * Description - prints lowercase alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
