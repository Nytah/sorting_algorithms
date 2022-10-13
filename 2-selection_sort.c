#include "sort.h"

/**
 * selection_sort - sorts an array of integers using
 * Selection sort algorith
 * @array: the array to be sorted
 * @size: the size of the array
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, tmp, min_idx;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				min_idx = j;
			}
		}
		if (min != array[i])
		{
			tmp = array[i];
			array[i] = min;
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
