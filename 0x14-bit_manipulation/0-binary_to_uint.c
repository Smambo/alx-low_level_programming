#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to binary string
 * Return: converted number, otherwise 0 if string contains 
 *        anything but zeroes and ones
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

	}
	result = strtoul(b, NULL, 2);
	return (result);
}
