#include "sort.h"
#include <stdbool.h>

void bubble_sort(int *array, size_t size)
{
    size_t i, k;
    int temp;
    bool swapped;

    if (size <= 1)
		return;
    for(k = 0; k < size - 1; k++)
    {
        swapped = false;
        for(i = 0; i < size - k - 1; i++)
        {
            if (array[i] >= array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
                print_array(array, size);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}
