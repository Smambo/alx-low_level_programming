#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: number
 * @index: index of bit to be returned
 * Return: value of bit at index on success
 * On error, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	return (n >> index & 1);
}
