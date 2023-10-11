#include "function_pointers.h"
/**
 *int_index - searches for intiger
 *@array: input array
 *@size: array size
 *@cmp: function pointer
 *Return: intiger
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if ((cmp) != 0)
				return (i);
		}
	}
	return (-1);
}
