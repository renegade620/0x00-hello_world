#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "abcdefghiklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(alph[i]);
		putchar('\n');
	}
	return (0);

}
