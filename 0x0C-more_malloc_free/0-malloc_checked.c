#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: input
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
		*s = 98;
	return (s);
}
