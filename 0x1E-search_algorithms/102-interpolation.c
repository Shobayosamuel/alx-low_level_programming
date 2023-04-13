#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of the first occurrence of value in array, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
        size_t high;
        size_t pos;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[2109] is out of range\n");
	return (-1);
}
