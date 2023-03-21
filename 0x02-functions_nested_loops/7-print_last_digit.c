#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number to get last digit from
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar(_abs(last_digit) + '0');
	return (_abs(last_digit));
}
