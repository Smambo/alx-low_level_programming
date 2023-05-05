#include "main.h"
#include "2-get_bit.c"
/**
 * clear_bit - sets the value of bit to 0 at given index
 * @n: number to iterate through
 * @index: bit index
 * Return: 1 on success, otherwise -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
	{
		return (1);
	}
	return (-1);
}
