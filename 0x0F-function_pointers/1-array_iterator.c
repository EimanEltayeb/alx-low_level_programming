#include "function_pointers.h"
/**
 * array_iterator - execute a function for array parameter
 * @array: imput
 * @size: size of array
 * @action: pointer to funcion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
