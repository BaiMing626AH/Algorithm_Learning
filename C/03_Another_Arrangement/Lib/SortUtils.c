#include "SortUtils.h"
#include "stdio.h"
#include "stdlib.h"

void Sort(char *arr, int size)
{
    if (arr == NULL || size <= 1)
        return;
    int i, j;
    char temp;
    int swapped; 

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
    return;
}