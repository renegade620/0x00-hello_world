#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, x;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
