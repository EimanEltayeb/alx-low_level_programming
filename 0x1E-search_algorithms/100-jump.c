#include "search_algos.h"
/**
 * jump_search - jump search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: index of value if found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, l, h;

	m = sqrt(size);
	if (!array)
		return (-1);
	for (l = 0, h = m; h < size; l += m, h += m)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		if (array[h] < value)
			continue;
		if (array[h] >= value || (h + m >= size))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, h);
			break;
		}
	}
	for (; l <= h; l++)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
	}
	return (-1);
}
