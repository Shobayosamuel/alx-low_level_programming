#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 *		   of integers using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: The index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start;
	size_t end;
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i != end)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
