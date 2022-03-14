#include <stdio.h>

/**
 * main - prints combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, c, z;

	for (x = '0'; c <= '9'; x++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (x < c && c < z)
				{
					putchar(x);
					putchar(c);
					putchar(z);

					if (x != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
