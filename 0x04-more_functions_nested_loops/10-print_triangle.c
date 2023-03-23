#include "main.h"
/**
 * print_triangle - prints a triangle using # character
 *
 * @size: represents size of triangle
 */
void print_triangle(int size)
{
	int base;
	int spaces;
	int height;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (base = 1; base <= size; base++)
		{
			for (spaces = size - base; spaces > 0; spaces--)
			{
				_putchar(' ');
			}
			for (height = 0; height < base; height++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
