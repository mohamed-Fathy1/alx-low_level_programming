#include "search_algos.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1;
	size_t left = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{

		int mid = left + round((right - left) / 2);
		size_t i = left;

		printf("Searching in array:");
		for (; i < right; i++)
		{
			printf(" %d,", array[i]);
		}
		printf(" %d\n", array[i]);

		if (value == array[mid])
			return (mid);

		if (value < mid)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
