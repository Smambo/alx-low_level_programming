#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array of integers
 *
 * @min: array minimum value
 * @max: array maximum value
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len = 0;

	if (min > max)
		return (NULL);

	i = min;
	while (i <= max)
	{
		len++;
		i++;
	}
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
