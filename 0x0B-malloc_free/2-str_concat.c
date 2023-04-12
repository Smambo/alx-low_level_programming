#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0, len2 = 0;
	char *ptr = malloc((len1 + len2 + 1) * sizeof(char));
	

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		ptr[i + len1] += s2[i];
		i++;
	}
	ptr[i + len1] = '\0';
	return (ptr);
}
