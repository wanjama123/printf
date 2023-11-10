#include "main.h"

/**
 * print_int - It orints the intager values of the function.
 * @args:It is the argument to print.
 * Return: Number of characters printed.
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = / 10;
	num = n;
