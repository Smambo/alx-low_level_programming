#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - iterates through an array
 * @array: array to be iterated through
 * @size: array size
 * @action: function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
