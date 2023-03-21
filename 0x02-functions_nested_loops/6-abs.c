#include "main.h"
/**
 * _abs - computes absolute value of an integer
 *
 * @a: int value that is checked
 *
 * Return: -a if int is negative, otherwise return int as is
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	return (a);
}
