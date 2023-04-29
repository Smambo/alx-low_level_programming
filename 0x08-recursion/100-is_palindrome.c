#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * palindrome_iterator - iterates through str to check if palindrome
 * @s: string to be iterated through
 * @start: index of start of string
 * @end: index of end of string
 * Return: 1 if palindrome, else 0
 */
int palindrome_iterator(char *s, int start, int end)
{
	if (s[start] != s[end])
	{
		return (0);
	}
	if (start >= end)
	{
		return (1);
	}
	return (palindrome_iterator(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if string is a palindrome
 *
 * @s: input string
 *
 * Return: 1 if string is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome_iterator(s, 0, len - 1));
}
