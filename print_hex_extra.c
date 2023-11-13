#include "main.h"

/**
 * print_hex_extra - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int print_hex_extra(unsigned long int num)
{
	long int a;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num != 0)
	{
		num /= 16;
		counter++;
	}

	array = malloc(counter * sizeof(long int));
	if (array == NULL)
	{
		return (-1);
	}

	for (a = 0; a < counter; a++)
	{
		array[a] = temp % 16;
		temp = temp / 16;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
