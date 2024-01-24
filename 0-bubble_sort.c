#include "sort.h"

/**
 * bubble_sort - sort array elements in ascending order.
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i = size, idx, temp = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i--)
		for (idx = 0; idx < i - 1; idx++)
		{
			if (array[idx] > array[idx + 1] && array[idx + 1])
			{
			temp = array[idx];
			array[idx] = array[idx + 1];
			array[idx + 1] = temp;
			print_array(array, size);
			}
		}
}
