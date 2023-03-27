#include "main.h"
/**
 * puts2 - prints every other char of a string, starting with first char
 *
 * @str: input string
 *
 * Return: every other character
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
