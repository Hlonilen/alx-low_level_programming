#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @val_num: number to print in binary
 */
void print_binary(unsigned long int val_num)
{
	int val_inn, count = 0;
	unsigned long int current;

	for (val_inn = 63; val_inn >= 0; val_inn--)
	{
		current = val_num >> val_inn;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
