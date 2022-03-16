#include "main.h"

/**
 * _isalpha - check description
 * @c: input character
 *
 * Description - checks for alphabetic character
 *
 * Return: 1 (Success) or 0 (Failure)
 */
int _isalpha(int c)
{
	if ((c == 'a' && c == 'z') || (c == 'A' && c == 'Z'))
			return (1);
	return (0);
}
