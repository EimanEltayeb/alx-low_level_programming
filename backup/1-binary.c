#include "search_algos.h"
/**
 * print_array - prints the searching arrray
 * @array: the array to be printed
 * @i: first index
 * @j: last index
 */
void print_array(int *array, size_t i, size_t j)
{
	size_t c;

	printf("Searching in array:");
	for (c = i; c <= j; c++)
	{
		if (c == i)
			printf(" %d", array[c]);
		else
			printf(", %d", array[c]);
	}
	printf("\n");
}

/**
 * binary_search - binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: index of value if found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, c;

	if (!array)
		return (-1);
	while (1)
	{
		print_array(array, i, j);
		c = (i + j) / 2;
		if (array[c] == value)
			return (c);
		if (i == j)
			break;
		if (array[c] > value)
			j = c - 1;
		else
			i = c + 1;
	}
	return (-1);
}
