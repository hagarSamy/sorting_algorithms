#include "sort.h"

/**
 * bubble_sort - sorts an array
 * @array: a ponter to the array to sort
 * @size: the size of the array
 * Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int temp;
	int swapped;

	if (size <= 1)
		return;
	for (k = 0; k < size - 1; k++)
	{
		swapped = 0;
		for (i = 0; i < size - k - 1; i++)
		{
			if (array[i] >= array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
