#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: No return value
 */

void print_alphabet_x10(void)
{
	char a;
	char n;

	for (n = 0; n < 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
