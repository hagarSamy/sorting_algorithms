#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j, k;
    int temp;

    for(k = 0; k < size - 1; k++)
    {
        for(i = 0; i < size - k - 1; i++)
        {
            if (array[i] >= array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                for(j = 0; j < size; j++)
                {
                    printf("%d", array[j]);
                    if (j != size - 1)
                    {
                        printf(", ");
                    }
                }
                printf("\n");
            }
        }
    }
}
