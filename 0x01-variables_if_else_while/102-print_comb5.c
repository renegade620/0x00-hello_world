#include <stdio.h>

/**
 * main - prints combination of two two-digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, c, z, a;

	for (x = 48; x <= 57; x++)
	{
		for (c = 48; c <= 57; c++)
		{
			for (z = 48; z <= 57; z++)
			{
				for (a = 48; a <= 57; a++)
				{
					if (((z + a) > (x + c) && z >= x) || x < z)
					{
						putchar(x);
						putchar(c);
						putchar(' ');
						putchar(z);
						putchar(a);

						if (x + c + z + a == 227 && c == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
