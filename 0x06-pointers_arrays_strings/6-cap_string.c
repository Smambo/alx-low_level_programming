#include "main.h"
/**
 * _indexOf - returns boolean if special char is detected
 *
 * @a: character to be checked
 *
 * Return: 1 if true, 0 if false
 */
int _indexOf(char a)
{
	int i;
	char arr[13] = {' ','\t','\n',',',';','.','!','?','"','(',')','{','}'};

	for (i = 0; i < 13; i++)
	{
		if (arr[i] == a)
		{
			return (1);
		}
	}
	return (0);
}
/**
 *cap_string - capitalizes all words of a string
 *
 * @str: string to be capitalized
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (_indexOf(str[i]))
		{
			continue;
		}
		if (str[i] >= 'a' && str[i] <= 'z' && (_indexOf(str[i - 1]) || i == 0))
		{
			str[i] = str[i] -32;
		}
	}
	return (str);
}
