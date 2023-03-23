#include "main.h"
/**
 * print_most_numbers - prints numbers 0 through 9, except for 2 and 4
 *
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
