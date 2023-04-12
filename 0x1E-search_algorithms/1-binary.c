#include "search_algos.h"
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
