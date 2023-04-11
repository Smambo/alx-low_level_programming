#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to new string which is a copy of str
 *
 * @str: string to be duplicated
 *
 * Return: pointer to duplicate string on success, NULL on failure
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	ptr = malloc(j + 1 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
