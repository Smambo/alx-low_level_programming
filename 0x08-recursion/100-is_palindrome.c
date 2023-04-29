#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * is_palindrome - checks if string is a palindrome
 *
 * @s: input string
 *
 * Return: 1 if string is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	int start = 0;
	int end = strlen(s - 1);

	for (; start < end; start++, end--)
	{
		if (s[start] != s[end])
		{
			return (0);
		}
	}
	if (start >= end)
	{
		return (1);
	}
	return (is_palindrome(s));
}
