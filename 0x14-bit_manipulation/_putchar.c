#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character val_cum to stdout
 * @val_cum: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char val_cum)
{
	return (write(1, &val_cum, 1));
}
