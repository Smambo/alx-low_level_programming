#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to be written to the file
 * Return: 1 on Success, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0, file, out;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
		out = write(file, text_content, len);
		if (out == -1)
			return (-1);
	}
	if (close(file) == -1)
		return (-1);

	return (1);

}
