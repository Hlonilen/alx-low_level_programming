#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @val_num: first number
 * @val_mic: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int val_num, unsigned long int val_mic)
{
	int val_inn, count = 0;
	unsigned long int current;
	unsigned long int exclusive = val_num ^ val_mic;

	for (val_inn = 63; val_inn >= 0; val_inn--)
	{
		current = exclusive >> val_inn;
		if (current & 1)
			count++;
	}

	return (count);
}
