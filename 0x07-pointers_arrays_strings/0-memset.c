#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *@s: memory area to be filled
 *@b: constant byte
 *@n: number of bytes of memory area
 *
 * Return: pointer to filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
