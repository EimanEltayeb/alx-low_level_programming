#include "search_algos.h"
/**
 * print_array - prints the searching arrray
 * @array: the array to be printed
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
}

/**
 * binary_search - binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1;

	if (!array)
		return (-1);
	while (i != j)
	{
		print_array(array, i, j);
		if (array[i] == value)
			return (i);
