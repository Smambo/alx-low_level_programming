#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on Success, -1 on Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, file, out;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);

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
