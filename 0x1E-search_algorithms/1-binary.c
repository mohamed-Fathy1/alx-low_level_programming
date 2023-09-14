#include "search_algos.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>

/**
 * binary_search - function
 * @array: int
 * @size: size_t
 * @value: int
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int rigth = size - 1;

	if (!array)
		return (-1);

	while (left <= rigth)
	{
		int mid = left + round((rigth - left) / 2);
		int i;

		printf("Searching in array:");
		for (i = left; i <= rigth; i++)
		{
			printf(" %d", array[i]);
			if (i < rigth)
				printf(",");
			else
				printf("\n");
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			rigth = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
