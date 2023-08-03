#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @val_num: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int val_num, unsigned int index)
{
	int bitter_pill;

	if (index > 63)
		return (-1);

	bitter_pill = (val_num >> index) & 1;

	return (bitter_pill);
}
