#include "main.h"
/**
 * factorial - returns factorial of given number
 *
 * @n: input number
 *
 * Return: -1 if n<0, 1 if n<=1, else factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
