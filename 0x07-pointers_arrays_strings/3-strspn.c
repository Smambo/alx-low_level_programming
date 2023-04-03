#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string to get length from
 * @accept: bytes accepted
 *
 * Return: number of bytes in initial segment of char s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				bytes++;
				break;
			}
		}
		if (s[b] == '\0')
		{
			return (bytes);
		}
	}
	return (bytes);
}
