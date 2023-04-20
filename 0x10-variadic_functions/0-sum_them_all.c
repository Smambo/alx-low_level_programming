#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - adds all parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
