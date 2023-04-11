#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars, & initializes it with a specific char
 *
 * @size: size of created array
 * @c: char to initialize
 *
 * Return: pointer to array, or NULL if size is 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
