#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 *
 * @n: number to determine the times table
 */

void print_times_table(int n)
{
	int row;
	int col;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{

			int prod = row * col;

			printf("%d", prod);
			if (col != n)
			{
				printf(",   ");
			}
		}
		printf("\n");
	}

}
