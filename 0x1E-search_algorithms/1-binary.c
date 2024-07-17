#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if not present or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    if (array == NULL || size == 0)
        return -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
            else
                printf("\n");
        }

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Value not found
}

