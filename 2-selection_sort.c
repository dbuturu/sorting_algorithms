#include "sort.h"
#include <stdio.h>

void selection_sort(int *array, size_t size)
{
	int i, j, jMin, temp;

	for (i = 0; i < (int)size - 1; i++)
	{
		jMin = i;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[jMin])
			{
				jMin = j;
			}
		}

		if (jMin != i)
		{
			temp = array[i];
			array[i] = array[jMin];
			array[jMin] = temp;
			print_array(array, size);
		}
	}
}
