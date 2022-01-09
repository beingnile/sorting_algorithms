#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t index;

	while (*array)
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
		}

	}
}
