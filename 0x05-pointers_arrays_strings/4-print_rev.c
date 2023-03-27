#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be printed in reverse
 *
 * Return: reversed string
 */
void print_rev(char *s)
{
	int len;

	for (len = _strlen(s) - 1; len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
