#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of ints
 * @array: pointer to first element in the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
