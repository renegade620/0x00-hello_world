#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
		putchar(c[i]);
	putchar('\n');
	return (0);
}
