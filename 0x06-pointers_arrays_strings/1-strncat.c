#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: resulting string
 * @src: string to be appended
 * @n: number of bytes to be concatenated
 *
 * Return: dest char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dc = 0;
	int sc = 0;

	while (dest[dc] != '\0')
	{
		dc++;
	}
	while (src[sc] != '\0' && sc < n)
	{
		dest[dc + sc] = src[sc];
		sc++;
	}
	dest[dc + sc] = '\0';
	return (dest);
}
