#include "sort.h"

/**
 * selection_sort - sorts aan array according to selection sort
 * @array: a pointer to the array
 * @size: length of the array
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (!size || !array)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = 1 + i; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array((const int *)array, size);
		}
	}
}
