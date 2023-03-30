#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: destination of copied string
 * @src: source of copied string
 * @n: amount of bytes to copy
 *
 * Return: dest char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
