#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value if found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
