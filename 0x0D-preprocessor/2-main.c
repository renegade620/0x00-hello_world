#include <stdio.h>

/**
 * main - prints name of file it was compiled from
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
