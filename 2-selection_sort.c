#include "sort.h"

/**
 * selection_sort - sorts aan array according to selection sort
 * @array: a pointer to the array
 * @size: length of the array
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (!size || !array)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0 + i; j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array((const int *)array, size);
			}
		}
	}
}
