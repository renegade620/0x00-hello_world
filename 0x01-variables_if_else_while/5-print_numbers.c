#include <stdio.h>

/**
 * main - print 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
