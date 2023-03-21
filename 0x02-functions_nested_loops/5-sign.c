#include "main.h"
/**
 * print_sign - prints sign of a number
 *
 * @n: number to be checked
 *
 * Return: 1 & print + if n positive, 0 if n zero, -1 & - if n negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
