#include "main.h"
/**
 * _strlen_recursion - returns the length of string
 *
 * @s: string to get length from
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i = i + 1);
	}
	return (0);
}
