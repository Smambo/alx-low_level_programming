#include "main.h"
/**
 * flip_bits - returns number of bits needed to flip
 *             from one number to another
 * @n: number one
 * @m: number two
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, flips = n ^ m;

	while (flips > 0)
	{
		bits = bits + (flips & 1);
		flips = flips >> 1;
	}
	return (bits);
}
