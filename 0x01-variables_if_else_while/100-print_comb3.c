#include <stdio.h>

/**
 * main - prints a combination of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, c;

	for (x = '0'; x <= '9'; x++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (x < c)
			{
				putchar (x);
				putchar(c);

				if (x != '8' || (x == '8' && x != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

