#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A fuction that read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t i;
	ssize_t j;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(fd, buf, letters);
	i = write(STDOUT_FILENO, buf, j);

	free(buf);
	close(fd);
	return (i);
}

