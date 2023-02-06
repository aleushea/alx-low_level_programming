#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this task will read a text file print to STDOUT.
 * @filename: a file that is to be read
 * @letters: number of letters to be read from the file
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *MeMo;
	ssize_t FiLe;
	ssize_t w;
	ssize_t t;

	FiLe = open(filename, O_RDONLY);
	if (FiLe == -1)
		return (0);
	MeMo = malloc(sizeof(char) * letters);
	t = read(FiLe, MeMo, letters);
	w = write(STDOUT_FILENO, MeMo, t);

	free(MeMo);
	close(FiLe);
	return (w);
}
