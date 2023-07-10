#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of file
 * @text_content: Null terminated string to add at end of file
 * Return: 1 on Success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	long int wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
