#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string in which char c will be located
 * @c: character to be located
 *
 * Return: pointer to s or NULL is c is not found
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}
	if (*ptr == c)
	{
		return (ptr);
	}
	return (0);
}
