#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array to be reversed
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;
	int temp;

	while (x < y)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
}
