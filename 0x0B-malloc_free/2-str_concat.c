#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	int i = 0, l1 = 0, l2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
		l1++;
	}
	while (s2[i] != '\0')
	{
		i++;
		l2++;
	}
	ptr = malloc((l1 + l2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < l1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < l2)
	{
		ptr[i + l1] = s2[i];
		i++;
	}
	ptr[i +l1] = '\0';
	return (ptr);
}
