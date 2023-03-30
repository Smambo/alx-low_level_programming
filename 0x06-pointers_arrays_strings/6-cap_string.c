#include "main.h"
/**
 * _indexOf - returns a boolean if special char is detected
 *
 * @a: character to return
 *
 * Return: true or false
 */
int _indexOf(char a)
{
	int i = 0;
	char arr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
		')', '{', '}'};

	while (i < 13)
	{
		if (arr[i] == a)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string to be capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (_indexOf(str[i]))
		{
			continue;
		}
		if (str[i] >= 'a' && str[i] <= 'z' && (_indexOf(str[i - 1]) || i == 0))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
