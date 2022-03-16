#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - check description
 *
 * Description - prints lowercase alphabet
 *
 * Return: void
 */

void print_alphabet(void)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		return;
	}
