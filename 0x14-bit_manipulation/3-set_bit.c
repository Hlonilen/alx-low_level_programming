#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @val_num: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *val_num, unsigned int index)
{
	if (index > 63)
		return (-1);

	*val_num = ((1UL << index) | *val_num);
	return (1);
}
