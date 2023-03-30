#include "main.h"
/**
 * rot13 - encodes a string using rot13
 *
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	char alpha[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot13[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if(str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
		}	
	}
	return (str);
}
