#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 *
 * Return: 0
 */
int main(void)

{
	char s[52] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char pwd[22];
	int i, j, password, c;

	srand(time(0));

	for (i = 0; password < 2772; i++)
	{
		j = rand() % 10;
		pwd[i] = s[j];
		password += pwd[i];
	}
	c = 2772 - password;
	pwd[i] = c;
	printf("%s\n", pwd);
	return (0);
}
