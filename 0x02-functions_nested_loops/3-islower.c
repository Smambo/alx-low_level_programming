#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * return: 1 if lowercase, or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
