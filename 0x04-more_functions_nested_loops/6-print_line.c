#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 *@n: number of times the _ character should be printed
 *
 * Return: 0 (Success)
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
