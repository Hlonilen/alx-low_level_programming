#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: val_b- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t val;
	ssize_t num;
	ssize_t sym;

	val = open(filename, O_RDONLY);
	if (val == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	sym = read(val, buf, letters);
	num = write(STDOUT_FILENO, buf, sym);

	free(buf);
	close(val);
	return (num);
}
