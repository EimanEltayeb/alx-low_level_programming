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
	/*void *temp;*/ /*a temperory pointer to hold the value of ptr*/

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
	{
		for (i = new_size; i <= old_size; i++)
			free(ptr[i]);
		return (ptr);
	}
	if (new_size > old_size)
	{
		/*for (i = 0; i < old_size; i++)
			temp[i] = ptr[i];
		free(ptr);*/
		ptr = malloc(new_size);
		/*for (i = 0; i < old_size; i++)
			ptr[i] = temp[i];*/
		return (ptr);
	}
}
