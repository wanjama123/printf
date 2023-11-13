#include "main.h"

/**
 * printf_string - function prints string
 * @val: arguement
 * Return: length of string
 *
 */

int printf_string(va_list val)
{
	char *str;
	int a;
	int size;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		size = _strlen(str);
		for (a = 0; a < size ; a++)
			_putchar(str[a]);
		return (size);
	}
	else
	{
		size = _strlen(str);
		for (a = 0; a < size; a++)
			_putchar(str[a]);
		return (size);
	}
}
