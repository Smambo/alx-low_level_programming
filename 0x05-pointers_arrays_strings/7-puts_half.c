#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 *
 * @str: input string
 *
 * Return: half of string
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;
	int n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
