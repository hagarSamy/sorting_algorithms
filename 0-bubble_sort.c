#include "sort.h"
#include "stdbool.h"
/**
 * bubble_sort - sorts an array
 * @array: a ponter to the array to sort
 * @size: the size of the array
 * Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int temp, *ptr;
	bool swapped;

	ptr = array;
	if (array == NULL || size <= 1)
		return;
	for (k = 0; k < size - 1; k++)
	{
		swapped = false;
		for (i = 0; i < size - k - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + i + 1);
				*(ptr + i + 1) = temp;
				print_array(array, size);
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}
