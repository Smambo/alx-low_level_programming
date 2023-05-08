#include "main.h"
/**
 * read_textfile - reads text file and prints it to POSIX stdout
 * @filename: file to be read
 * @letters: number of letters to be read and printed
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, print, out;
	char *buffer;

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	print = read(file, buffer, letters);
	if (print == -1)
		return (0);
	out = write(STDOUT_FILENO, buffer, print);
	if (out == -1)
		return (0);
	if (close(file) == -1)
		return (0);

	free(buffer);

	return (print);
}
