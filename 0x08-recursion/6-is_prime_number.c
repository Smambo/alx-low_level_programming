#include "main.h"
#include "3-factorial.c"
/**
 * is_prime_number - checks if input int is prime
 *
 * @n: input integer
 *
 * Return: 1 if n is prime number, else 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1 || n < 0)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i <= n / 2)
	{
		return (1);
	}
	else
	{
		return (is_prime_number(n - 1));
	}
}
