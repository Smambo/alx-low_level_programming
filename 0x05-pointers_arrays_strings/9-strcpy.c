#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copies string pointed to by src to buffer pointed to by dest
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
