#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string in which substring will be located
 * @needle: substring to be located
 *
 * Return: pointer to beginning of located substring or null if no substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[a] != '\0')
	{
		if (haystack[a] == needle[0])
		{
			while (needle[b] != '\0')
			{
				if (haystack[a + b] != needle[b])
				{
					break;
				}
				b++;
			}
			if (needle[b] == '\0')
			{
				return (haystack + a);
			}
		}
		a++;
	}
	return ('\0');
}
