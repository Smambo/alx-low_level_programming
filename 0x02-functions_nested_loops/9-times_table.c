#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0 (Success)
 */
void times_table(void)
{
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			if (row * col < 10)
			{
				_putchar((row * col) + '0');
			}
			else
			{
				_putchar((row * col) / 10 + '0');
				_putchar((row * col) % 10 + '0');
			}
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
