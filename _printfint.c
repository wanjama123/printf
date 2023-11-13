#include "main.h"

/**
 * print_int - Prints integer values.
 * @num: The integer to print.
 *
 * Return: The number of characters printed.
 */
int print_int(int num);

/**
 * print_dec - Alias for print_int. Prints decimal values.
 * @num: The decimal number to print.
 *
 * Return: The number of characters printed.
 */
int print_dec(int num);

/**
 * my_printf - Custom printf function supporting 'd' and 'i' specifiers.
 * @format: The format string.
 *            Specifiers supported: 'd', 'i'
 * @...: Additional arguments corresponding to format specifiers.
 *
 * Return: The number of characters printed.
 */
int my_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int count = 0;

	while (*format != '\0')
	{
		if (*format == 'd' || *format == 'i')
		{
			int num = va_arg(args, int);

			count += print_int(num);
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}

/**
 * print_int - Internal function to print integer values.
 * @num: The integer to print.
 *
 * Return: The number of characters printed.
 */
int print_int(int num)
{
	return (printf("%d", num));
}

/**
 * print_dec - Internal function (alias for print_int) to print decimal values.
 * @num: The decimal number to print.
 *
 * Return: The number of characters printed.
 */
int print_dec(int num)
{
	return (printf("%d", num));
}

