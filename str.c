#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @str: string pointer
 * Return: 1
 *
 */

int _strlen(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
/**
 * _strlenc - strlen const function
 * @str: char pointer
 * Return: 1
 *
 */

int _strlenc(const char *str)
{
	int a;

	for (a = 0 ; str[a] != 0; a++)
		;
	return (a);
}
