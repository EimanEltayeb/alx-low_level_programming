#include "main.h"
/**
 * _realloc - a function to realloc a block of memory.
 * @ptr: pointer to the memory
 * @old_size: initial size
 * @new_size: size after alloc
 * Return: pointer or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *temp;/*a temperory pointer to hold the value of ptr*/

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
	{
		temp = malloc(new_size);
		for (i = 0; i < new_size; i++)
			temp[i] = ((char *)ptr)[i];
		free(ptr);
		return ((void *)temp);
	}
	if (new_size > old_size)
	{
		/*
		 * ptr = malloc(new_size);
	*	if (ptr == NULL)
	*	{
		*/
		temp = malloc(new_size);
		for (i = 0; i < old_size; i++)
			temp[i] = ((char *)ptr)[i];
		free(ptr);
	}
	return (ptr);
}
