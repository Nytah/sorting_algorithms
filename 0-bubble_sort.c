#include "sort.h"

/**
 * bubble_sort: sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 * 
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j, n, new_n;
    int swap;

    if (array == NULL || size < 2)
    return;

    n = size;
    while (n > 0)
    {
        new_n = 0;
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++ ) {
                if (array[0] > array[j+1]) {
                    //swap numbers
                    swap = array[j];
                    array[j] = array[j+1];
                    array[j+1] = swap;
                    new_n = i + 1;
                    print_array(array, size);
                }
            }
        }
        n = new_n;
    }
}