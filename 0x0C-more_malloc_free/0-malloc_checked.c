#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: input
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
