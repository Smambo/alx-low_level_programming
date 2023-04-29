#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion_iterate - helper func to find root
 * @n: input number
 * @start: iterator start
 * @end: iterator end
 * Return: square root of n 
 */
int _sqrt_recursion_iterate(int n, int start, int end)
{
	if (start <= end)
	{
		int median = (start + end) / 2;
		int sq = median * median;

		if (sq == n)
		{
			return median;
		} else if (sq < n)
		{
			return (_sqrt_recursion_iterate(n, median + 1, end));
		}
		else
		{
			return (_sqrt_recursion_iterate(n, start, median - 1));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - recursively returns natural sqrt of a number
 *
 * @n: input number
 *
 * Return: -1 if n has no natural sqrt, else sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0 )
	{
		return (-1);
	}
	return (_sqrt_recursion_iterate(n, 0, n));
}
