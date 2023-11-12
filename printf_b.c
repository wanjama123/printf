#include "main.h"
/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, j = 1, k;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int a;

	for (i = 0; i < 32; i++)
	{
		a = ((j << (31 - i)) & num);
		if (a >> (31 - i))
			flag = 1;
		if (flag)
		{
			k = a >> (31 - i);
			_putchar(k + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
