#include "sort.h"
/**
  * selection_sort - selection sort algorithm
  * @array: array to sort
  * @size: size of array
  */
void selection_sort(int *array, size_t size)
{
	size_t x, x2;
	int min, tmp, idx;

	for (x = 0; x < size; x++)
	{
		min = array[i];
		for (x2 = x + 1; x2 < size; x2++)
		{
			if (min > array[x2])
			{
				min = array[x2];
				idx = x2;
			}
		}
		if (min != array[x])
		{
			tmp = array[x];
			array[x] = min;
			array[idx] = tmp;
			print_array(array, size);
		}
	}
}
