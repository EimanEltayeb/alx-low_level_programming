#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: input
 * @size: input
 * Return: NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	return (s);
}
