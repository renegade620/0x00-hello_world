#include "main.h"

/**
  * rev_string - Reverses a string
  *
  * @s: string to be reversed
  *
  * Return: nothing
  */
void rev_string(char *s)
{
	int i, c, k;
	char *a, z;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		z = s[i];
		s[i] = *a;
		*a = z;
		a--;
	}
}
