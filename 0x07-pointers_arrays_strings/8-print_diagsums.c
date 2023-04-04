#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: array
 * @size: size of diagonals
 *
 */
void print_diagsums(int *a, int size)
{
	int n = 0;
	int diag1 = 0;
	int diag2 = 0;

	while (n < size)
	{
		diag1 += a[(n * size) + n];
		diag2 += a[(size - 1) + ((size - 1) * n)];
		n++;
	}
	printf("%d, %d\n", diag1, diag2);
}
