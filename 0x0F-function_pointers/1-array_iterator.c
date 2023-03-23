#include <stdio.h>
/**
 * array_iterator - func discription
 * @array: first input
 * @size: second input
 * @action: third input
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
