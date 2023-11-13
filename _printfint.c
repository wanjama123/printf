#include "main.h"

/**
 * print_int - It prints the intager values of the function.
 * @args:It is the argument to print.
 * Return: Integer
 */

int print_int(va_list args)
{
	int j = va_arg(args, int);
	int num, last = j % 10, digit, exp = 1;
	int i = 1;

	j = j / 10;
	num = j;

	if (last < 0)
	{
		_putchar ('_');
		num = -num;
		j = -j;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = j;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}

	_putchar(last + '0');
	return (i);
}


/**
 * print_dec - It prints the decimal.
 * @args: This is the argument to print.
 * Return: integer
 */

int print_dec(va_list args)
{
	int j = va_arg(args, int);
	int num, last = j % 10, digit, exp = 1;
	int i = 1;

	j = j / 10;
	num = j;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		j = -j;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = j;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
