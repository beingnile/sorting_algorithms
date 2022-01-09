#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t index;
	int swapped;

	swapped = check_sort(array, size);
	while (swapped == 0)
	{
		for (index = 1; index < size; ++index)
		{
			if (array[index - 1] > array[index])
			{
				array[index - 1] ^= array[index];
				array[index] ^= array[index - 1];
				array[index - 1] ^= array[index];
				print_array(array, size);
			}
			swapped = check_sort(array, size);
		}
	}
}

int check_sort(int *array, size_t size)
{
	size_t index;
	int boolean = 0;

	for (index = 1; index < size; ++index)
	{
		if (array[index - 1] > array[index])
		{
			boolean = 0;
			break;
		}
		boolean = 1;
	}
	return (boolean);
}
