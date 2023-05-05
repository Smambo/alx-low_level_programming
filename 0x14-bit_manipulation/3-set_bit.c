#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit - sets value of bit to 1
 * @n: number to be iterated through
 * @index: bit index
 * Return: 1 on Success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	
	(*n) |= 1 << index;

	if (get_bit((*n), index) == 1)
	{
		return (1);
	}
	return (-1);
}
