#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: string to be reversed
 * Return: 0 (success)
 */
int rev_string(char *s)
{
	int a;
	int length = 0;

	for (a = 0 ; s[a] != '\0' ; a++)

	length++;

	for (a = 0 ; a < length / 2 ; a++)
	{
	char j;

	j = s[a];
	s[a] = s[length - 1 - a];
	s[length - 1 - a] = j;
	}
	return (0);
}

