#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 *	to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, i = 0;

	flip = n ^ m;

	while (flip > 0)
	{
		i += flip & 1;
		flip >>= 1;
	}
	return (i);
}
