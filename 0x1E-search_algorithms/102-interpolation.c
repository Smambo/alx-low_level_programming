#include "search_algos.h"
/**
 * interpolation_search - searches for value in sorted array of ints
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	if (value < array[low] || value > array[high])
	{
		printf("Value checked array[%lu] is out of range\n", low);
		return (-1);
	}
	return (-1);
}