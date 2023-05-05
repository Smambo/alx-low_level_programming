#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted to binary
 * Return: binary of a integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;

	x <<= ((sizeof(x) * 8) - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (x > 0)
	{
		if ((x & n) == 0)
			x >>= 1;
		else
			break;
	}
	while (x > 0)
	{
		if ((x & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		x >>= 1;
	}
}
