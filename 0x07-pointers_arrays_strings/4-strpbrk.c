#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to be searched
 * @accept: bytes accepted
 *
 * Return: pointer to byte in char s that matches bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
