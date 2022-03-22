#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: string whose characters are to be printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
		j++;
	for (i = 0; i < j; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
