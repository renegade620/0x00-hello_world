#include <stdio.h>
#include <unistd.h>

/**
 * main - print text as it is
 *
 * Return: 1 (error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 61);
	return (1);
}
