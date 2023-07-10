#include "main.h"

/**
 * read_textfile - reads a textfile
 * @filename: name of file to be read
 * @letters: number of letters to be read and printed
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, print;
	char *buf;

	buf = malloc(letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	print = read(fd, buf, letters);

	if (print == -1)
		return (0);

	wr = write(STDOUT_FILENO, buf, print);

	if (wr == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buf);
	return (print);
}
