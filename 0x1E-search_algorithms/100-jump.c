#include "search_algos.h"
/**
 * jump_search - searches for a value in sorted array of ints
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step;
	size_t i, prev = 0, start;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt(size);

	while (array[(size_t)fmin(prev, size - 1)] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", (size_t)fmin(prev, size - 1), array[(size_t)fmin(prev, size - 1)]);
		prev += step;
		if (prev >= size)
			break;
	}
	start = prev -step;
	printf("Value found between indexes [%lu] and [%lu]\n", start, prev);

	for (i = start; i <= fmin(prev, size - 1); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
