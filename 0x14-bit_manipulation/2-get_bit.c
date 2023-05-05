#include "main.h"
/**
 * get_bit - returns value of a bit at given index
 * @n: number to be iterated through
 * @index: bit index
 * Return: value of bit at index, otherwise -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	return (n >> index & 1);
}
