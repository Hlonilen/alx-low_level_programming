#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @val_boo: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *val_boo)
{
	int val_inn;
	unsigned int decimal_val = 0;

	if (!val_boo)
		return (0);

	for (val_inn = 0; val_boo[val_inn]; val_inn++)
	{
		if (val_boo[val_inn] < '0' || val_boo[val_inn] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (val_boo[val_inn] - '0');
	}

	return (decimal_val);
}
